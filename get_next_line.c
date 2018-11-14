/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:15:51 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/14 10:05:26 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*load(t_buff *list, int fd)
{
	int		i;
	char	*str;

	if ((str = NULL) == NULL && !list)
		return (str);
	while (list)
	{
		if (list->fd == fd)
			break ;
		list = list->next;
	}
	if (list == NULL || list->fd != fd)
		return (NULL);
	i = -1;
	if (!(str = (char*)malloc(ft_strclen(list->buff, '\n') + 1)))
		return (NULL);
	while (list->buff && list->buff[++i] != '\n' && list->buff[i] > 0)
		str[i] = list->buff[i];
	str[(i == -1) ? 0 : i] = '\0';
	if (list->buff && list->buff[i] && list->buff[i] == '\n')
		list->buff = list->buff + i + 1;
	else
		list->buff = NULL;
	return (str);
}

t_buff	*add_new(t_buff *list, char *buff, int fd)
{
	t_buff	*first;
	t_buff	*new;

	first = list;
	while (list && list->next != NULL)
		list = list->next;
	if (!(new = (t_buff*)malloc(sizeof(t_list))))
		return (NULL);
	new->fd = fd;
	new->next = NULL;
	while (*buff && *buff != '\n' && *buff != -1)
		buff++;
	if (buff && *buff)
		buff++;
	new->buff = ft_strdup(buff);
	if (list == NULL)
		return (new);
	list->next = new;
	return (first);
}

int		check(t_buff *list, int fd)
{
	if (list)
		while (list)
		{
			if (list->fd == fd)
			{
				if (list->buff != NULL)
					return (0);
				break ;
			}
			list = list->next;
		}
	return (1);
}

t_buff	*save(t_buff *list, char *buff, int fd)
{
	t_buff	*first;

	first = list;
	if (!check(list, fd))
		return (list);
	if (list)
		while (list)
		{
			if (list->fd == fd)
			{
				while (*buff && *buff != '\n' && *buff != -1)
					buff++;
				buff++;
				free(list->buff);
				list->buff = ft_strdup(buff);
				return (first);
			}
			list = list->next;
		}
	return (add_new(first, buff, fd));
}

/*
**	int				total;  tab[0];
**	int				i;      tab[1];
**	int				r;      tab[2];
*/

int		get_next_line(const int fd, char **line)
{
	static t_buff	*list;
	char			*buff;
	char			*str;
	int				tab[3];

	if (!(buff = (char*)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	str = load(list, fd);
	tab[0] = (str != NULL) ? ft_strlen(str) : 0;
	ft_bzero(buff, BUFF_SIZE);
	while (check(list, fd) && (tab[2] = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (!(tab[1] = 0) &&
	!(str = (char*)ft_realloc(str, tab[0], tab[0] + ft_strclen(buff, '\n'))))
			return (-1);
		while (tab[1] < BUFF_SIZE && buff[tab[1]] != '\n' && buff[tab[1]] != -1)
			str[tab[0]++] = buff[tab[1]++];
		if (buff[tab[1]] == '\n' || buff[tab[1]] == -1)
			break ;
	}
	list = save(list, buff, fd);
	free(buff);
	str[tab[0]] = '\0';
	ft_memmove(*line, str, tab[0] + 1);
	return ((tab[2] <= 0) ? 0 : 1);
}

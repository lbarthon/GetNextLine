/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:53:26 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/13 13:37:35 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static int	ft_strlen(char const *str)
{
	int i;

	i = 0;
	if (str)
		while (str[i])
			i++;
	return (i);
}

static int	ft_start_spaces(char const *str)
{
	int i;

	i = 0;
	if (str)
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
	return (i);
}

static int	ft_end_spaces(char const *str)
{
	int i;
	int j;

	i = ft_strlen(str) - 1;
	j = 0;
	if (str)
		while (str[i - j] == ' ' || str[i - j] == '\n' || str[i - j] == '\t')
			j++;
	return (j);
}

static int	is_full_blank(char const *s)
{
	int i;

	i = 0;
	while (s && s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (s && s[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		i;
	int		j;
	char	*str;

	if (is_full_blank(s))
	{
		if (!(str = (char*)malloc(sizeof(char) * 0)))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	start = ft_start_spaces(s);
	end = ft_end_spaces(s);
	i = ft_strlen(s) + 1 - end - start;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) - end && str)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

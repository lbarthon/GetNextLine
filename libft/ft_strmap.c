/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:45:28 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/09 11:45:13 by lbarthon         ###   ########.fr       */
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

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		size;
	int		i;
	char	*new;

	size = ft_strlen(s);
	if (!(new = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = -1;
	while (++i < size)
		if (s && f)
			new[i] = f(s[i]);
	new[i] = '\0';
	return (new);
}

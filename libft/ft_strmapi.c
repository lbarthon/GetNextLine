/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:49:58 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/09 11:44:31 by lbarthon         ###   ########.fr       */
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

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*new;

	size = ft_strlen(s);
	if (!(new = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = -1;
	while (++i < size)
		if (s && f)
			new[i] = f(i, s[i]);
	new[i] = '\0';
	return (new);
}

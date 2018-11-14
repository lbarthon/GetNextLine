/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:49:05 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/13 13:33:04 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabcpy(char **dest, const char **src)
{
	int i;
	int j;

	i = 0;
	while (src[i])
	{
		j = 0;
		if (!(dest[i] = (char*)malloc(sizeof(char) * ft_strlen(src[i]) + 1)))
			return (NULL);
		while (src[i][j])
		{
			dest[i][j] = src[i][j];
			j++;
		}
		dest[i][j] = '\0';
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

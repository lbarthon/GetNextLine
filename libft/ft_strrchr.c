/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:34:38 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/08 10:34:39 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	while (length >= 0)
	{
		if (str[length] == c)
			return ((char*)str + length);
		length--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:14:12 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/09 11:42:09 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;
	size_t		i;

	ptr_dest = (char*)dest;
	ptr_src = (const char*)src;
	i = -1;
	while (++i < n)
	{
		*(ptr_dest + i) = *(ptr_src + i);
		if (ptr_src[i] == (char)c)
			return (ptr_dest + i + 1);
	}
	return (NULL);
}

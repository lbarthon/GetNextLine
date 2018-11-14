/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:20:28 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/08 10:20:30 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*ptr_src;
	char		*ptr_dest;

	ptr_src = (const char*)src;
	ptr_dest = (char*)dest;
	while (n-- > 0)
		*(ptr_dest + n) = *(ptr_src + n);
	return (ptr_dest);
}

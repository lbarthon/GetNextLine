/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:20:51 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/12 10:20:13 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;

	ptr_dest = (char*)dest;
	ptr_src = (const char*)src;
	if (n == 0)
		return (dest);
	if (ptr_src < ptr_dest)
	{
		ptr_dest = ptr_dest + n - 1;
		ptr_src = ptr_src + n - 1;
		while (n-- > 0)
			*ptr_dest-- = *ptr_src--;
	}
	else
		while (n > 0)
		{
			*ptr_dest++ = *ptr_src++;
			n--;
		}
	return (dest);
}

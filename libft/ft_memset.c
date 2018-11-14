/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:21:30 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/08 10:21:32 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char *ptr;
	char fill;

	ptr = (char*)s;
	fill = (char)c;
	while (n-- > 0)
		*(ptr + n) = fill;
	return (s);
}

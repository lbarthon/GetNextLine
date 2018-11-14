/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:26:31 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/07 16:02:35 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	i;

	if (!(ptr = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	i = -1;
	while (++i < size)
		*(ptr + i) = 0;
	return (ptr);
}

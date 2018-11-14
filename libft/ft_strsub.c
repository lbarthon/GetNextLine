/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:08:22 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/09 11:58:03 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	pos;

	if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	pos = -1;
	while (++pos < len && s)
		new[pos] = s[start + pos];
	new[pos] = '\0';
	return (new);
}

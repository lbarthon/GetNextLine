/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:34:15 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/10 11:54:53 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t i;
	size_t j;

	if (length == 0)
		return (NULL);
	if (haystack == needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < length)
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0' &&
				needle[j] != '\0' && i < length)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0' && i - j < length)
			return ((char*)haystack + (i - j));
		i -= j;
		i++;
	}
	return (NULL);
}

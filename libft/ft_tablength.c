/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:06:42 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/12 11:07:17 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_tablength(char **tab)
{
	int i;

	i = 0;
	if (tab)
		while (tab[i] != NULL)
			i++;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:52:53 by lbarthon          #+#    #+#             */
/*   Updated: 2018/11/15 10:11:14 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *actual;
	t_list *next;

	if (alst && *alst)
	{
		actual = *alst;
		while (actual != NULL && actual)
		{
			next = actual->next;
			del(actual->content, actual->content_size);
			free(actual);
			actual = next;
		}
		*alst = NULL;
	}
}

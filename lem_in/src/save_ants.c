/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_ants.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:12:51 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 15:12:12 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_ants			*save_ants(t_g *all)
{
	t_ants		*head;
	t_ants		*node;
	int			i;
	char		*tmp;

	head = NULL;
	i = 1;
	while (i <= all->nr_ants)
	{
		if (head == NULL)
		{
			head = (t_ants *)ft_memalloc(sizeof(t_ants));
			node = head;
		}
		tmp = ft_itoa(i);
		node->name = ft_strjoin("L", tmp);
		free(tmp);
		node->next = (t_ants *)ft_memalloc(sizeof(t_ants));
		if (node->name == NULL || ft_strcmp("\0", node->name) == 0)
			error();
		i++;
		node = node->next;
	}
	node->next = NULL;
	return (head);
}

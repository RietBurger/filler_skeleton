/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:53:23 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 15:53:52 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_links				*add_link(char *str, t_links *node, t_g *all)
{
	t_links			*head;

	head = node;
	if (node == NULL)
	{
		head = (t_links *)ft_memalloc(sizeof(t_links));
		node = head;
	}
	while (node->next != NULL)
		node = node->next;
	node->next = (t_links *)ft_memalloc(sizeof(t_links));
	node->link = str;
	node->arr = ft_strsplit(str, '-');
	if (str[0] != '#')
		print_arr(node->arr);
	all->nr_links++;
	return (head);
}

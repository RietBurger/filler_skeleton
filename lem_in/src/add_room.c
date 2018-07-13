/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:40:58 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 18:22:28 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_rooms				*add_room(char *str, t_rooms *node, t_g *all)
{
	t_rooms			*head;

	head = node;
	if (node == NULL)
	{
		head = (t_rooms *)ft_memalloc(sizeof(t_rooms));
		node = head;
	}
	while (node->next != NULL)
		node = node->next;
	node->next = (t_rooms *)ft_memalloc(sizeof(t_rooms));
	node->name = save_room(str);
	if (str[0] != '#')
		ft_putendl(str);
	all->nr_rooms++;
	return (head);
}

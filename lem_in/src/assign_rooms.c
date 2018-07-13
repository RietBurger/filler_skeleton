/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_rooms.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 08:47:15 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 16:30:48 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_ants			*assign_rooms(t_g *all)
{
	t_ants		*head;
	t_rooms		*tmp;
	int			i;

	tmp = all->rooms;
	head = all->ants;
	while (all->rooms->next)
	{
		i = all->rooms->in_room;
		while (i != 0)
		{
			while (all->ants->next)
			{
				all->ants->room = all->rooms->name;
				all->ants->last = NULL;
				all->ants = all->ants->next;
			}
			i--;
		}
		all->ants = head;
		all->rooms = all->rooms->next;
	}
	all->rooms = tmp;
	return (head);
}

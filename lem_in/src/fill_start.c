/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 08:32:50 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 15:37:40 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	fill_start_room(t_g *all)
{
	t_rooms		*tmp;

	tmp = all->rooms;
	while (all->rooms->next)
	{
		if (ft_strcmp(all->rooms->name, all->start_room) == 0)
			all->rooms->in_room = all->nr_ants;
		all->rooms = all->rooms->next;
	}
	all->rooms = tmp;
}

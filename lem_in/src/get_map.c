/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:55:54 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:22:07 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int					get_map(t_g *all)
{
	t_input			*node;
	t_rooms			*rooms;
	t_links			*links;

	node = all->data;
	rooms = NULL;
	links = NULL;
	while (node->next)
	{
		get_start_end(node->str, all);
		print_ants(all);
		if (ft_strchr(node->str, ' ') != NULL)
			rooms = add_room(node->str, rooms, all);
		else if (ft_strchr(node->str, '-') != NULL)
			links = add_link(node->str, links, all);
		node = node->next;
	}
	all->rooms = rooms;
	check_errors(all);
	fill_start_room(all);
	all->ants = save_ants(all);
	all->ants = assign_rooms(all);
	all->links = links;
	return (0);
}

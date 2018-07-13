/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_to_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 08:26:09 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:36:06 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		path_to_end(t_g *g, t_ants *a, t_rooms *r, char **ar)
{
	if (check_for_end(g, ar) == 1)
	{
		g->rooms = move_from_to(g, r, a->room, g->end_room);
		a->last = a->room;
		a->room = g->end_room;
		print_name(a->name, a->room);
	}
	else
	{
		while (*ar)
		{
			if (all_the_ifs(g, r, a, *ar) == 1)
			{
				g->rooms = move_from_to(g, r, a->room, *ar);
				a->last = a->room;
				a->room = *ar;
				print_name(a->name, a->room);
				break ;
			}
			ar++;
		}
	}
}

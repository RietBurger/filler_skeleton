/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_from_to.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:34:44 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:30:32 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_rooms			*move_from_to(t_g *g, t_rooms *r, char *frm, char *t)
{
	g->rooms = r;
	while (g->rooms->next)
	{
		if (ft_strcmp(g->rooms->name, frm) == 0 &&
				ft_strcmp(g->rooms->name, g->end_room) != 0)
		{
			g->rooms->in_room--;
			break ;
		}
		g->rooms = g->rooms->next;
	}
	g->rooms = r;
	while (g->rooms->next)
	{
		if (ft_strcmp(g->rooms->name, t) == 0)
		{
			g->rooms->in_room++;
			break ;
		}
		g->rooms = g->rooms->next;
	}
	return (r);
}

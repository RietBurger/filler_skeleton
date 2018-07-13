/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traverse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:53:09 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 17:28:18 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void			traverse(t_g *all)
{
	char		**arr;
	t_rooms		*r;
	t_ants		*a;

	r = all->rooms;
	a = all->ants;
	find_path(all, r);
	while ((ants_in_room(all, r, all->end_room) != all->nr_ants))
	{
		a = all->ants;
		while (a->next)
		{
			if (ft_strcmp(a->room, all->end_room) != 0)
			{
				arr = links(all, a->room);
				path_to_end(all, a, r, arr);
				free(arr);
			}
			a = a->next;
		}
		ft_putchar('\n');
	}
}

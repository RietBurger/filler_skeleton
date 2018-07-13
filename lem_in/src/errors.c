/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:02:34 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:23:37 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	error(void)
{
	ft_putendl("OOPS, You Did Something Wrong");
	exit(1);
}

void	check_errors(t_g *all)
{
	if (all->nr_links == 0 || all->nr_rooms == 0 || all->end_flag != -1)
		error();
}

void	check_errors1(t_g *all)
{
	if (all->nr_ants == 0 || all->start_room == NULL || all->end_room == NULL)
		error();
}

void	check_errors2(t_g *all)
{
	if (all->ants == NULL || all->rooms == NULL || all->links == NULL)
		error();
}

int		all_the_ifs(t_g *al, t_rooms *r, t_ants *a, char *str)
{
	if ((ft_strcmp(str, al->end_room) == 0 || ants_in_room(al, r, str) == 0) &&
			ft_strcmp(al->end_room, a->room) != 0 &&
			ft_strcmp(a->last, str) != 0 &&
			ft_strcmp(str, al->start_room) != 0 &&
			is_room_valid(al, r, str) == 0)
		return (1);
	return (0);
}

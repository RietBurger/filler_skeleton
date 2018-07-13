/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_ant_in_room.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:49:26 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 16:47:01 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			ants_in_room(t_g *all, t_rooms *r, char *str)
{
	int		ret;

	all->rooms = r;
	ret = 0;
	while (all->rooms->next)
	{
		if (ft_strcmp(all->rooms->name, str) == 0)
		{
			ret = all->rooms->in_room;
			break ;
		}
		all->rooms = all->rooms->next;
	}
	all->rooms = r;
	return (ret);
}

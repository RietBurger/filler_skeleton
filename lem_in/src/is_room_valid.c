/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_room_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 08:22:52 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 16:40:19 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			is_room_valid(t_g *all, t_rooms *r, char *str)
{
	int		ret;

	all->rooms = r;
	ret = 0;
	while (all->rooms->next)
	{
		if (ft_strcmp(all->rooms->name, str) == 0)
		{
			ret = all->rooms->valid;
			break ;
		}
		all->rooms = all->rooms->next;
	}
	all->rooms = r;
	return (ret);
}

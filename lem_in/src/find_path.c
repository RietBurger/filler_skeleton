/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 16:38:41 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 17:28:15 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		find_path(t_g *all, t_rooms *r)
{
	t_rooms			*head;
	char			**arr;
	int				i;
	int				j;

	head = all->rooms;
	while (r->next)
	{
		i = 0;
		arr = links(all, r->name);
		j = 0;
		while (arr[j++])
		{
			if (is_room_valid(all, r, arr[j]) == 0)
				i++;
		}
		free(arr);
		if (i == 1 && ft_strcmp(r->name, all->start_room) != 0 &&
				ft_strcmp(r->name, all->end_room) != 0 && r->valid == 0)
		{
			r->valid = -1;
			r = head;
		}
		r = r->next;
	}
}

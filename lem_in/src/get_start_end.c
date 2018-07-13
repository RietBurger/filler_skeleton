/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_start_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:54:41 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:06:21 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	get_start_end(char *str, t_g *all)
{
	if (all->start_flag == 1)
	{
		all->start_room = save_room(str);
		all->start_flag = -1;
	}
	else if (all->end_flag == 1)
	{
		all->end_room = save_room(str);
		all->end_flag = -1;
	}
	else if (ft_strcmp("##start", str) == 0 && all->start_flag != -1)
	{
		all->start_flag = 1;
		ft_putendl(str);
	}
	else if (ft_strcmp("##end", str) == 0 && all->end_flag != -1)
	{
		all->end_flag = 1;
		ft_putendl(str);
	}
	else if (ft_strstr(str, "#"))
		ft_putendl(str);
}

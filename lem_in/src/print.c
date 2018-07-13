/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:50:10 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 17:21:06 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	print_name(char *name, char *room)
{
	ft_putstr(name);
	ft_putchar('-');
	ft_putstr(room);
	ft_putchar(' ');
}

int		print_ants(t_g *all)
{
	t_input *node;

	node = all->data;
	if (all->nr_ants == 0)
	{
		all->nr_ants = ft_atoi(node->str);
		ft_putendl(node->str);
	}
	return (0);
}

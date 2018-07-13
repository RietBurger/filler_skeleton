/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:23:18 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:39:24 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		init_ints(t_g *all)
{
	all->playernr = 1;
	all->Bwidth = 0;
	all->Bheight = 0;

	return (0);
}

int		main(void)
{
	t_g all;

	all.data = NULL;
	all.data = read_file(&all);
	init_ints(&all); // set all ints in global struct to 0

		find_place(&all);
		ft_putendl("Print saved in t_board ");
		while (all.board->next)
		{
			
			ft_putendl(all.board->line);
			ft_putnbr(all.board->lineNr);
			ft_putchar('\n');
			all.board = all.board->next;	
		}
	
	 free_all(all.board, all.data);
//////////  NB **** final output must be: y x
	return (0);
}

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
	// while (1)
	// {
		find_place(&all);
		while (all.board->next)
		{
			ft_putendl("MAIN ");
			ft_putnbr(all.board->lineNr);
			ft_putstr("\n\n");
			ft_putendl(all.board->line);
			all.board = all.board->next;
			
		}
		ft_putnbr(all.piece->pieceY);
		ft_putnbr(all.piece->pieceX);
	// }
	// use strcmp to see if we find player, plateau, piece, etc.
	// if (!(ft_isdigit(all.data->str[0])))
	// 	error();

	// get_map(&all); // run through info in all->data (thus every single line read in and seper)


	// check_errors1(&all);
	// check_errors2(&all);
	// ft_putchar('\n');
	// traverse(&all);
	
	// free_all(all.links, all.rooms, all.ants, all.data);
	// free(all.end_room);
	// free(all.start_room);
	return (0);
}

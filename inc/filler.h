/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:04:46 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 16:25:20 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include <stdio.h>
# include "../libft/libft.h"

typedef struct			s_input
{
	char				*str;
	int					nodenr;
	struct s_input		*next;
}						t_input;

typedef struct			s_piece
{
	int					pieceX;
	int					pieceY;
	int					cnrCoord;
	int					valid;
}						t_piece;

typedef struct			s_board
{
	char				*line;
	int					lineNr;
	struct s_board		*next;
}						t_board;

typedef struct			s_g
{
	t_input				*data;
	t_piece				*piece;
	t_board				*board;
	char				*gnl;
	int					playernr;
	int					Bwidth;
	int					Bheight;
}						t_g;

t_input					*read_file(t_g *all);
int						find_place(t_g *all);
void					error(void);
void					save_piece(t_input *node, t_g *all);
t_board					*save_board(t_input *node, t_g *all);

void	free_all(t_board *b, t_input *i);
void	free_board(t_board *b);
void	free_input(t_input *i);

#endif

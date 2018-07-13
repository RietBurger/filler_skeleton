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
// 	char				*last;
// 	struct s_rooms		*next;
}						t_piece;

typedef struct			s_board
{
	char				*line;
	// char				**arr;
	int					lineNr;
	struct s_board		*next;
}						t_board;

// typedef struct			s_ants
// {
// 	char				*name;
// 	char				*room;
// 	char				*last;
// 	struct s_ants		*next;
// }						t_ants;

typedef struct			s_g
{
	t_input				*data;
	t_piece				*piece;
	t_board				*board;
	// t_ants				*ants;
	char				*gnl;
	int					playernr;
	int					Bwidth;
	int					Bheight;
	
	// char				*start_room;
	// char				*end_room;
}						t_g;

t_input					*read_file(t_g *all);
int						find_place(t_g *all);
void					error(void);
void					save_piece(t_input *node, t_g *all);
t_board					*save_board(t_input *node, t_g *all);

// void	free_all(t_links *l, t_rooms *r, t_ants *a, t_input *i)

#endif

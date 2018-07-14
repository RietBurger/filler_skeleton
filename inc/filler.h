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
	t_input				*data; //this is to keep head position of t_input list and access it by `t_g all` in main
	t_piece				*piece; //this is to access t_piece struct 
	t_board				*board; //this is to keep head position of t_board list and access it by `t_g all` in main
	char				*gnl; //variable through which gnl reads information into t_input->str in `read_file`
	int					playernr; //store your player nr
	int					Bwidth; //store board width
	int					Bheight; //store board height
}						t_g;

t_input					*read_file(t_g *all);
int						find_place(t_g *all);
void					error(void);
void					save_piece(t_input *node, t_g *all); //in file save_piece.c
														//save information give about the piece
t_board					*save_board(t_input *node, t_g *all); //in file save_piece.c
														//save information given about board

void	free_all(t_board *b, t_input *i); //free memory allocated. Called in main()
void	free_board(t_board *b); //called by free_all()
void	free_input(t_input *i); //called by free_all()

#endif

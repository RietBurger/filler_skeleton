#include "filler.h"

void	error(void)
{
	ft_putendl("OOPS, You Did Something Wrong");
	exit(1);
}

int					find_place(t_g *all)
{
	t_input		*node;
	t_input		*piece;
	t_board		*board;

	int bcnt;
	node = all->data; //set head to newly created t_input node

	piece = NULL; //initialize list to NULL
	int i = 0;
	while (node->next)
	{
		char *str1 = *ft_strsplit(node->str, ' ');
		if (ft_strcmp(str1, "Plateau") == 0)
		{

			

			all->Bwidth = ft_atoi(ft_strsplit(node->str, ' ')[1]); //save board width
			all->Bheight = ft_atoi(ft_strsplit(node->str, ' ')[2]); //save board height
			ft_putstr("board width and height "); //for testing only
			ft_putnbr(all->Bwidth); // ...
			ft_putchar(' '); //...
			ft_putnbr(all->Bheight); // ...
			ft_putchar('\n'); // ...
			
			board = save_board(node, all); //save board info and return head address into t_board board
			piece = node; // set address of node with 'Plateau' to list t_input piece to 
						//avoid finding all the other lines with 'piece' in it
			while (piece->next)
			{				
				char *str2 = *ft_strsplit(piece->str, ' ');
				if (ft_strcmp(str2, "Piece")== 0)
				{
					save_piece(piece, all);//pass node with 'piece' in line to save piece info 
					piece->next = NULL; // move onto next node
				}
				else
					piece = piece->next; //iterate through piece until word 'Piece' is found
			}
		}
		// this statement would probably be moved to within one of the other functions
		if (ft_strchr(&node->str[i], 'X') != NULL || ft_strchr(node->str, 'x')
		!= NULL)
		{
			// map_pieces();
		}
		i++;
		node = node->next;
	}
	all->board = board; // set t_board head to board in t_g all
	return (0);
}
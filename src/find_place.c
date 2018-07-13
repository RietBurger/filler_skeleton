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
	node = all->data;

	piece = NULL;
	int i = 0;
	while (node->next)
	{
		char *str1 = *ft_strsplit(node->str, ' ');
		if (ft_strcmp(str1, "Plateau") == 0)
		{

			piece = node;

			all->Bwidth = ft_atoi(ft_strsplit(node->str, ' ')[1]);
			all->Bheight = ft_atoi(ft_strsplit(node->str, ' ')[2]);
			ft_putstr("board width and height ");
			ft_putnbr(all->Bwidth);
			ft_putchar(' ');
			ft_putnbr(all->Bheight);
			ft_putchar('\n');
			
			board = save_board(node, all);

			while (piece->next)
			{				
				char *str2 = *ft_strsplit(piece->str, ' ');
				if (ft_strcmp(str2, "Piece")== 0)
				{
					save_piece(piece, all);
					piece->next = NULL;
				}
				else
					piece = piece->next;
			}
		}
		if (ft_strchr(&node->str[i], 'X') != NULL || ft_strchr(node->str, 'x')
		!= NULL)
		{
			// map_pieces();
		}
		i++;
		node = node->next;
	}
	all->board = board;
	return (0);
}
#include "filler.h"

void	error(void)
{
	ft_putendl("OOPS, You Did Something Wrong");
	exit(1);
}

int					find_place(t_g *all)
{
	t_input		*node;
	// t_board			*board;
	t_input		*piece;
	t_board		*board;

	int bcnt;

	node = all->data;
	// board = NULL;
	piece = NULL;
	int i = 0;
	while (node->next)
	{
		char *str1 = *ft_strsplit(node->str, ' ');
		// ft_putendl(str1);
		if (ft_strcmp(str1, "Plateau") == 0)
		{
			// info = NULL;
			piece = node;

			all->Bwidth = ft_atoi(ft_strsplit(node->str, ' ')[1]);
			all->Bheight = ft_atoi(ft_strsplit(node->str, ' ')[2]);
			// ft_putendl("this is Bwidth and Bheight ");
			ft_putnbr(all->Bwidth);
			ft_putchar(' ');
			ft_putnbr(all->Bheight);
			ft_putchar('\n');
			
			board = save_board(node, all);

			// ft_putendl("this is place->str");
			// ft_putendl(piece->str);
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
			// return (0);
		if (ft_strchr(&node->str[i], 'X') != NULL || ft_strchr(node->str, 'x')
		!= NULL)
		{
			//////////  NB **** output must be: y x
			// ft_putendl("this is in find_place");
			// ft_putendl(node->str);
			ft_putnbr(node->nodenr);
			ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar('\n');
			//  return (0);
		}
		i++;
		// ft_putstr("this is i nr two: ");
		// ft_putnbr(i);
		// ft_putchar('\n');
		node = node->next;
	}
	all->board = board;
	// check_errors(all);
	// fill_start_room(all);
	// all->ants = save_ants(all);
	// all->ants = assign_rooms(all);
	// all->links = links;
	return (0);
}
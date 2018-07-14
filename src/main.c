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
	t_g all; //declare struct t_g. with this, can access all other lists and tructs

	all.data = NULL; // set t_input data to NULL before passing it to read file
	all.data = read_file(&all); //read the file into a list, line by line so that info can be extracted from there
	init_ints(&all); // set all ints in global struct to 0

		find_place(&all);// by passing the entire struct t_g all through, we can access all the structs, lists, etc created in filler.h
						// because of first 3 variable declarations in t_g struct
		ft_putendl("Print saved in t_board "); //for testing only
		while (all.board->next)
		{
			ft_putendl(all.board->line); //see what is saved in this variables
			ft_putnbr(all.board->lineNr); //see what is saved in this variable
			ft_putchar('\n');
			all.board = all.board->next; //move on to next node of list t_board
		}
	
	 free_all(all.board, all.data); //free what was malloc'd
//////////  NB **** final output must be: y x
	return (0);
}

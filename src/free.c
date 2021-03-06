#include "filler.h"

void	free_board(t_board *b)
{
	t_board *tmp_l;

	while (b != NULL)
	{
		tmp_l = b;
		b = b->next;
		free(tmp_l->line);
		free(tmp_l);
	}
	free(b);
}

void	free_input(t_input *i)
{
	t_input	*tmp_i;

	while (i != NULL)
	{
		tmp_i = i;
		i = i->next;
		free(tmp_i->str);
		free(tmp_i);
	}
	free(i);
}

void	free_all(t_board *b, t_input *i)
{
	free_board(b);
	free_input(i);
}

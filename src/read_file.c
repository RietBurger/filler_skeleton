#include "filler.h"

t_input			*read_file(t_g *all)
{
	t_input		*head;
	t_input		*node;

	head = NULL;
	int i;

	i = 0;
	while (get_next_line(0, &all->gnl))
	{
		if (head == NULL)
		{
			head = (t_input *)ft_memalloc(sizeof(t_input));
			node = head;
		}
		node->str = all->gnl;
		node->nodenr = i;
		node->next = (t_input *)ft_memalloc(sizeof(t_input));
		if (node->str == NULL || (ft_strcmp(node->str, "\0") == 0))
			// return(0);
			error();
		// ft_putendl(node->str);
		node = node->next;
		i++;
	}
	node->next = NULL;
	return (head);
}

#include "filler.h"

t_input			*read_file(t_g *all)
{
	t_input		*head; // head is to be kept and returned to struct t_g all so that we can access the list at all times
	t_input		*node; // this will be the actual nodes 

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
		node->str = all->gnl; //read the line into str in t_input node
		node->nodenr = i; // number the node (for future use)
		node->next = (t_input *)ft_memalloc(sizeof(t_input)); //allocate memory for the next node
		if (node->str == NULL || (ft_strcmp(node->str, "\0") == 0))
			error();
		node = node->next; //move to next node
		i++;
	}
	node->next = NULL; //end list
	return (head); //return the head
}

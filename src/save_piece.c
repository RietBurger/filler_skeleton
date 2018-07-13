#include "filler.h"

void    save_piece(t_input *node, t_g *all)
{
    t_piece piece;
    
    piece.pieceY = ft_atoi(ft_strsplit(node->str, ' ')[1]);
    piece.pieceX = ft_atoi(ft_strsplit(node->str, ' ')[2]);
    ft_putstr("this is pieceY in save_piece ");
    ft_putnbr(piece.pieceY);
    ft_putchar('\n');
    ft_putstr("this is pieceX in save_piece ");
    ft_putnbr(piece.pieceX);
    ft_putchar('\n');
}

t_board    *save_board(t_input *node, t_g *all)
{
    t_board *head;
    t_board *board;
    t_input *count;

    int i;
    int bcnt;
    count = node;
    head = NULL;

    bcnt = all->Bheight;
    i = -2;
    
    while (bcnt > 0)
    {        
        if (head == NULL)
		{
		    head = (t_board *)ft_memalloc(sizeof(t_board));
		    board = head;
		}
        board->line = node->str;
		board->lineNr = i;
		if (node->str == NULL || (ft_strcmp(node->str, "\0") == 0))
			error();	
        board->next = (t_board *)ft_memalloc(sizeof(t_board));    	

        board = board->next;
        node = node->next;
        i++;
        bcnt--;
    }
    board->next = NULL;
    node->next = count;
    return (head);
}
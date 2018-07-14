#include "filler.h"

void    save_piece(t_input *node, t_g *all)
{
    t_piece piece;
    
    piece.pieceY = ft_atoi(ft_strsplit(node->str, ' ')[1]); //save size of y axis of piece
    piece.pieceX = ft_atoi(ft_strsplit(node->str, ' ')[2]); //save size of x axis of piece
    ft_putstr("this is pieceY in save_piece "); //for testing only
    ft_putnbr(piece.pieceY); // ...
    ft_putchar('\n'); // ...
    ft_putstr("this is pieceX in save_piece "); // ...
    ft_putnbr(piece.pieceX); // ...
    ft_putchar('\n'); // ...
}

t_board    *save_board(t_input *node, t_g *all)
{
    t_board *head; //this is to return starting point of list
    t_board *board; // the actual list nodes
    t_input *count; // place holder for node being sent through

    int i;
    int bcnt;
    count = node; // set place holder to address of node sent in
    head = NULL; //initialize head, as this is the first time we're creating a t_board

    bcnt = all->Bheight; // use board height as counter
    i = -2; //so that we'll get line number on/of the board
    
    while (bcnt > 0)
    {        //from here 
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
        // to here, is basically the same as in read_file()
        node = node->next; //move onto next node passed in, so we can extract and divide the info we want from it
        i++;
        bcnt--;
    }
    board->next = NULL; //null terminare board list
    node->next = count; //set node back to address as passed in
    return (head); //return the head of list t_board
}
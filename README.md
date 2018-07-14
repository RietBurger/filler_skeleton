# filler_skeleton
Skeleton to build filler on


How to use:

    1) add your library folder, named libft to main directory
    2) ensure your GNL is in your library
    3) compile by running `make`
    4) once compiled and making changes - run `make re`
    5) when compiled, run program with `./miner.filler < testMap`
    6) when creating new functions, insert function prototype into `inc/filler.h`
    7) when creating new files, insert file name into `Makefile`

Current output:
    1) Displays board width and height saved into global struct `t_g`
    2) Displays piece size marked as pieceY and pieceX in struct `t_piece`
    3) Displays all information saved in list `t_board`, one node at a time.

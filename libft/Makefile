NAME		= libft.a

SRCS		= ft_strstr.c ft_strjoin.c ft_putstr.c ft_strcat.c ft_strclr.c \
			  ft_isdigit.c ft_toupper.c ft_strequ.c ft_memmove.c ft_itoa.c \
			  ft_memcmp.c ft_strlcat.c ft_putnbr.c ft_memchr.c ft_putchar.c \
			  ft_putchar_fd.c ft_striter.c ft_isalpha.c ft_memccpy.c \
			  ft_putnbr_fd.c ft_strcmp.c ft_strncpy.c ft_atoi.c ft_memalloc.c \
			  ft_strchr.c ft_strnstr.c ft_isprint.c ft_putendl.c ft_strncat.c \
			  ft_strrchr.c ft_isalnum.c ft_putstr_fd.c ft_isascii.c ft_strnequ.c \
			  ft_bzero.c ft_strtrim.c ft_iswhtspc.c ft_striteri.c ft_strmapi.c \
			  ft_strdel.c ft_strsub.c ft_strdup.c ft_strnew.c ft_memcpy.c ft_tolower.c \
			  ft_memdel.c ft_strncmp.c ft_strlen.c ft_strcpy.c ft_strmap.c \
			  ft_putendl_fd.c ft_memset.c ft_strsplit.c ft_print_bits.c \
			  get_next_line.c epur_str.c ft_free_arr.c

OBJS		= ft_strstr.o ft_strjoin.o ft_putstr.o ft_strcat.o ft_strclr.o \
			  ft_isdigit.o ft_toupper.o ft_strequ.o ft_memmove.o ft_itoa.o \
			  ft_memcmp.o ft_strlcat.o ft_putnbr.o ft_memchr.o ft_putchar.o \
			  ft_putchar_fd.o ft_striter.o ft_isalpha.o ft_memccpy.o \
			  ft_putnbr_fd.o ft_strcmp.o ft_strncpy.o ft_atoi.o ft_memalloc.o \
			  ft_strchr.o ft_strnstr.o ft_isprint.o ft_putendl.o ft_strncat.o \
			  ft_strrchr.o ft_isalnum.o ft_putstr_fd.o ft_isascii.o ft_strnequ.o \
			  ft_bzero.o ft_strtrim.o ft_iswhtspc.o ft_striteri.o ft_strmapi.o \
			  ft_strdel.o ft_strsub.o ft_strdup.o ft_strnew.o ft_memcpy.o ft_tolower.o \
			  ft_memdel.o ft_strncmp.o ft_strlen.o ft_strcpy.o ft_strmap.o \
			  ft_putendl_fd.o ft_memset.o ft_strsplit.o ft_print_bits.o \
			  get_next_line.o epur_str.o ft_free_arr.o

CCFLAGS		= -Wall -Wextra -Werror

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

OBJS:
	gcc -c $(SRCS) libft.h $(CCFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

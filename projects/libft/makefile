CC=gcc
FLAGS= -Wall -Wextra -Werror
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
NAME=libft.a
AR=ar rcs
RM=rm -f
all:$(NAME)
$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)
re:all fclean
.PHONY:all clean fclean re

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar rsc	$(NAME) $(OBJ)
	
/*$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)*/

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

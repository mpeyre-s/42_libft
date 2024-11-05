NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
        ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strlcpy.c \
        ft_strlcat.c, ft_strchr.c

HEAD = libft.h
OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

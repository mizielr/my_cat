##
## Makefile for my_cat in /Users/robertmizielski/ETNA/my_cat/miziel_r
## 
## Made by MIZIELSKI Robert
## Login   <miziel_r@etna-alternance.net>
## 
## Started on  Fri Dec 12 17:37:14 2014 MIZIELSKI Robert
## Last update Fri Dec 12 20:07:13 2014 MIZIELSKI Robert
##

CC	= gcc
NAME	= cat
FLAGS	= -W -Wall -Werror
SRC	= $(wildcard *.c)
OBJ	= $(SRC:.c=.o)
RM	= rm -rf

$(NAME):	$(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ) *~

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
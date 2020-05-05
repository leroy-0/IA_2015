##
## Makefile for dante in /home/leroy_0/tek1/dante
##
## Made by leroy_0
## Login   <leroy_0@epitech.net>
##
## Started on  Fri Apr 29 09:03:09 2016 leroy_0
## Last update Fri Apr 29 09:11:34 2016 leroy_0
##

SRCPATH =	src/

SRC     =	$(SRCPATH)main.c \
		$(SRCPATH)solver.c \
		$(SRCPATH)utils.c \
		$(SRCPATH)solve_dante.c \
		$(SRCPATH)my_x_malloc.c \
		$(SRCPATH)my_str_to_wordtab.c

NAME    =	solver

CC      =	gcc $(INC)

RM      =	rm -Rf

CFLAGS  =	-W -Wall -Wextra

CFLAGS  +=	-I include/

OBJS    =	$(SRC:.c=.o)

all     :	$(NAME)

$(NAME) :	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB)

clean   :
		$(RM) *~
		$(RM) $(SRCPATH)*~
		$(RM) $(OBJS)

fclean  :	clean
		$(RM) $(NAME)

re      :	fclean all

.PHONY  :	all clean fclean re

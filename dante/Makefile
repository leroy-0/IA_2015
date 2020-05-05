##
## Makefile for dante in /home/leroy_0/tek1/dante
##
## Made by leroy_0
## Login   <leroy_0@epitech.net>
##
## Started on  Fri Apr 29 09:20:17 2016 leroy_0
## Last update Fri Apr 29 09:34:10 2016 leroy_0
##

MAKE	=	make

CLEANER	=	make clean

FCLEANER=	make fclean

NAME	=	compiler

all	:	$(NAME)

$(NAME)	:
		$(MAKE) -C profondeur
		$(MAKE) -C largeur
		$(MAKE) -C astar

clean	:
		$(CLEANER) -C profondeur
		$(CLEANER) -C largeur
		$(CLEANER) -C astar

fclean	:
		$(FCLEANER) -C profondeur
		$(FCLEANER) -C largeur
		$(FCLEANER) -C astar

re	:	fclean	all

.PHONY	:	clean fclean all re $(NAME)

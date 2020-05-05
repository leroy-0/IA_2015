/*
** utils.c for utils in /home/leroy_0/tek1/dante
**
** Made by leroy_0
** Login   <leroy_0@epitech.net>
**
** Started on  Fri Apr 29 08:31:51 2016 leroy_0
** Last update Fri Apr 29 08:31:59 2016 leroy_0
*/

#include	<unistd.h>
#include	"solver.h"

void		my_putstrerror(char *str)
{
  int		cpt;

  cpt = 0;
  while (str && str[cpt])
    my_putcharerror(str[cpt++]);
}

int		my_strlen(char *str)
{
  int		cpt;

  cpt = 0;
  while (str && str[cpt])
    cpt++;
  return (cpt);
}

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putcharerror(char c)
{
  write(2, &c, 1);
}

void		my_putstr(char *str)
{
  int		cpt;

  cpt = 0;
  while (str && str[cpt])
    my_putchar(str[cpt++]);
}

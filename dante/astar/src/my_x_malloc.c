/*
** my_x_malloc.c for my_x_malloc in /home/leroy_0/tek1/dante
**
** Made by leroy_0
** Login   <leroy_0@epitech.net>
**
** Started on  Fri Apr 29 08:59:15 2016 leroy_0
** Last update Fri Apr 29 08:59:34 2016 leroy_0
*/

#include <stdlib.h>
#include "solver.h"

void		*my_x_malloc(int size)
{
  void		*p;

  p = malloc(size);
  if (p == 0)
    {
      my_putstr("Error : Malloc failed, now exiting\n");
      exit(0);
    }
  return (p);
}

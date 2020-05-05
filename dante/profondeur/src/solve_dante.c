/*
** solve_dante.c for solve_dante in /home/leroy_0/tek1/dante
**
** Made by leroy_0
** Login   <leroy_0@epitech.net>
**
** Started on  Fri Apr 29 08:34:43 2016 leroy_0
** Last update Fri Apr 29 09:10:29 2016 leroy_0
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "solver.h"

void		free_map(char **map)
{
  int		cpt;

  cpt = 0;
  while (map && map[cpt])
    free(map[cpt++]);
  free(map);
}

int             solve_map(char **map, t_maze *maze)
{
  t_solve	solve;

  solve.ctrl = 0;
  solve.savex = maze->startx;
  solve.savey = maze->starty;
  solve.cpt = maze->startx;
  solve.cpt_map = maze->starty;
  (void)map;
  (void)solve;
  return (0);
}

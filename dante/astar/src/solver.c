/*
** mazesolver.c for mazesolver in /home/leroy_0/tek1/CPE_colle_semaine1
**
** Made by leroy_0
** Login   <leroy_0@epitech.net>
**
** Started on  Wed Apr 27 08:42:45 2016 leroy_0
** Last update Fri Apr 29 08:56:49 2016 leroy_0
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "solver.h"

void            disp_map(char **tab)
{
  int           cpt;

  cpt = 0;
  while (tab && tab[cpt])
    {
      my_putstr(tab[cpt++]);
      my_putchar('\n');
    }
}

int             track_end(char **map, t_maze *maze)
{
  int           cpt;
  int           cpt_map;

  cpt = 0;
  cpt_map = 0;
  while (map && map[cpt_map])
    cpt_map++;
  if (cpt_map >= 1)
    cpt_map--;
  while (map && map[cpt_map][cpt])
    cpt++;
  cpt--;
  maze->endx = cpt;
  maze->endy = cpt_map;
  return (0);
}

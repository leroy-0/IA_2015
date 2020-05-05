/*
** mazesolver.c for mazesolver in /home/leroy_0/tek1/CPE_colle_semaine1
**
** Made by leroy_0
** Login   <leroy_0@epitech.net>
**
** Started on  Wed Apr 27 08:42:45 2016 leroy_0
** Last update Fri Apr 29 09:09:09 2016 leroy_0
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "solver.h"

int		check_res_track(t_maze *maze, char **map)
{
  maze->startx = 0;
  maze->starty = 0;
  if (track_end(map, maze) == -1)
    return (-1);
  if (solve_map(map, maze) == -1)
    return (-1);
  return (0);
}

int             my_track_path(char **map)
{
  t_maze        maze;
  int           cpt_map;
  int           cpt;

  cpt = 0;
  cpt_map = 0;
  while (map && map[cpt_map])
    {
      while (map && map[cpt_map][cpt])
	{
	  if (map[cpt_map][cpt] != KEY_WALL && map[cpt_map][cpt] != KEY_WAY)
	    return (-1);
	  cpt++;
	}
      cpt_map++;
      cpt = 0;
    }
  if (check_res_track(&maze, map) == -1)
    return (-1);
  return (0);
}

char		*get_mapstr(char *buffer, char *res, char *tmp, int readchars)
{
  if (readchars < 0)
    return (NULL);
  buffer[readchars] = '\0';
  if (res == NULL)
    {
      res = my_x_malloc(sizeof(char) * (my_strlen(buffer) + 1));
      res = my_strcpy(res, buffer);
    }
  else
    {
      tmp = my_x_malloc(sizeof(char) * (my_strlen(buffer) + my_strlen(res) + 1));
      tmp = my_strcpy(tmp, res);
      tmp = my_strcat(tmp, buffer);
      free(res);
      res = my_x_malloc(sizeof(char) * (my_strlen(tmp) + 1));
      res = my_strcpy(res, tmp);
      free(tmp);
    }
  return (res);
}

int             mazesolver(char *name)
{
  char          **map;
  char          *res;
  char          *tmp;
  char          buffer[10];
  int           readchars;
  int           fd;

  res = NULL;
  tmp = NULL;
  map = NULL;
  fd = open(name, O_RDONLY);
  if (fd == -1)
    return (-1);
  while ((readchars = read(fd, buffer, 10)))
    if ((res = get_mapstr(buffer, res, tmp, readchars)) == NULL)
      return (-1);
  map = my_str_to_wordtab(map, res);
  free(res);
  if (my_track_path(map) == -1)
    return (-1);
  disp_map(map);
  free_map(map);
  return (0);
}

int		main(int argc, char **argv)
{
  (void)argc;
  if (argv[1])
    {
      if (mazesolver(argv[1]) == -1)
	{
	  my_putstr("Error while loading the map\n");
	  return (-1);
	}
    }
  else
    {
      my_putstrerror("Usage : ./dante map\n");
      return (-1);
    }
}

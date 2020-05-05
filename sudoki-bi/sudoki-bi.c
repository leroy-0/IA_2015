/*
** sudoki-bi.c for sudoki-bi in
**
** Made by Tekm
** Login   <tekm@epitech.net>
**
** Started on  Fri Feb 26 19:54:59 2016 Tekm
** Last update Fri Feb 26 21:10:43 2016 Tekm
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line/get_next_line.h"

int		get_that_map(t_struct_d *data, char *str,
			     int cpt, int row)
{
  while (cpt < 9 && (str = get_next_line(0)) != NULL)
    {
      row = 2;
      while (str[row] && row < 19)
      	{
      	  if (str[row] <= '9' && str[row] >= '0')
	    {
	      data->map[cpt][row - 1] = (str[row] - '0');
	    }
	  else
	    str[row] = 0;
	  printf("%d", data->map[cpt][row - 1]);
	  if (str[row + 1] == '\0')
	    row++;
	  else
	    row += 2;
      	}
      if (row < 18)
      	{
      	  printf("Error: Bad Data->Map\n");
      	  return (1);
      	}
      printf("\n");
      data->map[cpt][row - 1] = '\0';
      free(str);
      cpt++;
    }
  data->map[cpt] = NULL;
  return (0);
}

int		get_my_map(t_struct_d *data, char *str)
{
  int		cpt;
  int		row;

  cpt = 0;
  data->map = malloc(sizeof(data->map) * 10);
  while (cpt < 9)
    data->map[cpt++] = malloc(sizeof(int) * 20);
  cpt = 0;
  row = 1;
  if (get_that_map(data, str, cpt, row) == 1)
    return (1);
  return (0);
}

int		get_map(t_struct_d *data)
{
  char		*str;

  if ((str = get_next_line(0)) == NULL)
    {
      printf("Error: Bad Map\n");
      free(str);
      return (1);
    }
  if (get_my_map(data, str) == 1)
    return (1);
  if ((str = get_next_line(0)) == NULL)
    {
      printf("Error: Bad Map\n");
      free(str);
      return (1);
    }
  return (0);
}

int		sudoku_bi(t_struct_d *data)
{
  return (0);
}

int		main()
{
  t_struct_d	*data;

  data = malloc(sizeof(data));
  if (get_map(data) == 1)
    return (1);
  if (sudoku_bi(data) == 1)
    return (1);
  return (0);
}

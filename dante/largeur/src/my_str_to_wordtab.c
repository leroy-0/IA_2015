/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/leroy_0/tek1/dante
**
** Made by leroy_0
** Login   <leroy_0@epitech.net>
**
** Started on  Fri Apr 29 09:01:06 2016 leroy_0
** Last update Fri Apr 29 09:01:42 2016 leroy_0
*/

#include	<stdlib.h>
#include	"solver.h"

char		*my_strcpy(char *dest, char *src)
{
  int		cpt;

  cpt = 0;
  while (src && src[cpt])
    {
      dest[cpt] = src[cpt];
      cpt++;
    }
  dest[cpt] = '\0';
  return (dest);
}

char		*my_strcat(char *dest, char *src)
{
  int		cpt;
  int		cpt_src;

  cpt = 0;
  cpt_src = 0;
  while (dest && dest[cpt])
    cpt++;
  while (src && src[cpt_src])
    {
      dest[cpt] = src[cpt_src];
      cpt_src++;
      cpt++;
    }
  dest[cpt] = '\0';
  return (dest);
}

void		init_values(int *cpt_res, int *cpt_tab, int *cpt)
{
  (*cpt) = 0;
  (*cpt_tab) = 0;
  (*cpt_res) = 0;
}

char		**my_str_to_wordtab(char **tab, char *res)
{
  int		cpt_res;
  int		cpt_tab;
  int		cpt;

  init_values(&cpt_res, &cpt_tab, &cpt);
  tab = my_x_malloc(sizeof(char *) * (my_strlen(res) + 1));
  while (res && res[cpt_res])
    {
      tab[cpt_tab] = my_x_malloc(sizeof(char) * (my_strlen(res) + 1));
      while (res && res[cpt_res] && res[cpt_res] != '\n')
	{
	  tab[cpt_tab][cpt] = res[cpt_res];
	  cpt_res++;
	  cpt++;
	}
      tab[cpt_tab][cpt] = '\0';
      cpt_tab++;
      if (res[cpt_res])
	cpt_res++;
      cpt = 0;
    }
  tab[cpt_tab] = NULL;
  return (tab);
}

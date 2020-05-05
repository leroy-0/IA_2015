/*
** mazesolver.h for mazesolver.h in /home/leroy_0/tek1/CPE_colle_semaine1
**
** Made by leroy_0
** Login   <leroy_0@epitech.net>
**
** Started on  Wed Apr 27 09:36:46 2016 leroy_0
** Last update Fri Apr 29 09:09:28 2016 leroy_0
*/

#ifndef MAZESOLVER_H
# define MAZESOLVER_H

# define	KEY_WALL	'X'
# define	KEY_WAY		'*'
# define	KEY_PATH	'o'

typedef	struct		s_struct_maze
{
  int		startx;
  int		starty;
  int		endx;
  int		endy;
}			t_maze;

typedef	struct		s_struct_solve
{
  int           cpt_map;
  int           savex;
  int           savey;
  int           ctrl;
  int           cpt;
}			t_solve;

char            *my_strcpy(char *dest, char *src);
char            *my_strcat(char *dest, char *src);
char            **my_str_to_wordtab(char **tab, char *res);
void            disp_map(char **tab);
int             mazesolver(char *name);
int             main(int argc, char *argv[]);
void            my_putstrerror(char *str);
int             my_strlen(char *str);
void            my_putchar(char c);
void            my_putcharerror(char c);
void            my_putstr(char *str);
char            **fill_zero(char **map, int save, int cpt, int cpt_map);
int             track_end(char **map, t_maze *maze);
int             solve_map(char **map, t_maze *maze);
void            *my_x_malloc(int size);
void            free_map(char **map);

#endif          /* !MAZESOLVER_H_ */

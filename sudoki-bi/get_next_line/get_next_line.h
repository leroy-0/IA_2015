/*
** get_next_line.h for get_next_line in /home/leroy_0/rendu/CPE_2015_getnextline
**
** Made by leroy_0
** Login   <leroy_0@epitech.net>
**
** Started on  Mon Jan  4 09:50:22 2016 leroy_0
** Last update Fri Feb 26 20:48:54 2016 Tekm
*/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef READ_SIZE
# define READ_SIZE (14)
#endif /* !READ_SIZE */

char	*get_next_line(const int fd);

typedef struct	s_struct_d
{
  int		**map;
  int		line;
  int		row;
}		t_struct_d;

#endif /* !GET_NEXT_LINE_H */

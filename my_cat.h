/*
** my_cat.h for my_cat in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 17:29:50 2014 MIZIELSKI Robert
** Last update Sun Dec 14 14:41:47 2014 MIZIELSKI Robert
*/

#ifndef __MY_CAT_H_
# define __MY_CAT_H_
# define BUFF_SIZE 1

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

struct	s_opt
{
  int	e;
  int	n;
  int	b;
};

typedef struct s_opt t_opt;

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_opts(int argc, char **argv, t_opt *opts);
int	my_error(char *str);
void	clean_str(char str[BUFF_SIZE]);
void	display_nb(int nb);
void	my_put_nbr(int nb);
void	my_init(int *a, int *b);
int	is_not_opt(char *str);
int	only_opts(int argc, char **argv);
int	exec_opt(int i, char **argv, t_opt *opts);
int	invalid_option(char c);

#endif

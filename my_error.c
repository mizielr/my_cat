/*
** my_error.c for my_cat in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 19:18:38 2014 MIZIELSKI Robert
** Last update Sun Dec 14 12:13:40 2014 MIZIELSKI Robert
*/

#include "my_cat.h"

void	usage()
{
  my_putstr("usage: ./cat [-ben] [file ...]");
  my_putchar('\n');
}

int	invalid_option(char c)
{
  my_putstr("./cat: invalid option -- '");
  my_putchar(c);
  my_putchar('\'');
  my_putchar('\n');
  usage();
  return (1);
}

void	my_perror(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    write(2, &str[i], 1);
}

int	my_error(char *filename)
{
  my_perror("cat :");
  perror(filename);
  return (-1);
}

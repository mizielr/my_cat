/*
** my_putchar.c for my_putchar in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 19:28:57 2014 MIZIELSKI Robert
** Last update Fri Dec 12 19:29:24 2014 MIZIELSKI Robert
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

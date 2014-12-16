/*
** my_display.c for my_cat in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 20:27:48 2014 MIZIELSKI Robert
** Last update Sun Dec 14 15:58:45 2014 MIZIELSKI Robert
*/

#include "my_cat.h"

void	display_nb(int nb)
{
  int	i;
  int	tmp;
  int	len;

  nb++;
  tmp = nb;
  if (nb < 10000)
    {
      for (len = 1; tmp / 10; len++)
	tmp = tmp / 10;
      for (i = 0; i < 6 - len; i++)
	my_putchar(' ');
    }
  my_put_nbr(nb);
  my_putstr("  ");
}

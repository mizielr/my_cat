/*
** my_clean.c for my_cat in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 19:43:15 2014 MIZIELSKI Robert
** Last update Fri Dec 12 19:47:36 2014 MIZIELSKI Robert
*/

#include "my_cat.h"

void	clean_str(char str[BUFF_SIZE])
{
  int	i;

  for (i = 0; i < BUFF_SIZE; i++)
    str[i] = 0;
}

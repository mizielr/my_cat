/*
** my_strlen.c for my_strlen in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 18:04:30 2014 MIZIELSKI Robert
** Last update Fri Dec 12 18:04:55 2014 MIZIELSKI Robert
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

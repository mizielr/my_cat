/*
** my_putstr.c for my_putstr in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 19:31:01 2014 MIZIELSKI Robert
** Last update Fri Dec 12 19:31:55 2014 MIZIELSKI Robert
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    my_putchar(str[i]);
}

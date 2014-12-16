/*
** my_put_nbr.c for my_put_nbr in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 20:31:20 2014 MIZIELSKI Robert
** Last update Fri Dec 12 20:57:46 2014 MIZIELSKI Robert
*/

void	my_putchar(char c);
void	my_putstr(char *str);

int	my_len_nb(int n)
{
  int	i;

  i = 0;
  while (n != 0)
    {
      n = n / 10;
      i++;
    }
  return (i);
}

int	get_len(int n)
{
  int	i;
  int	d;

  i = 1;
  d = 1;
  while (i < my_len_nb(n))
    {
      d = d * 10;
      i++;
    }
  return (d);
}

int	check_over(int n)
{
  if (n == -2147483648)
    return (1);
  return (0);
}

void	my_put_nbr(int n)
{
  int	c;
  int	d;

  if (check_over(n))
    my_putstr("-2147483648");
  else
    {
      if (n < 0)
	{
	  my_putchar('-');
	  n = n * -1;
	}
      d = get_len(n);
      while (d > 0)
	{
	  c = (n / d) % 10;
	  my_putchar(c + 48);
	  d = d / 10;
	}
    }
}

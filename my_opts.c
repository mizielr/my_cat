/*
** my_opts.c for my_cat in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 17:41:14 2014 MIZIELSKI Robert
** Last update Sun Dec 14 15:38:31 2014 MIZIELSKI Robert
*/

#include "my_cat.h"

int	only_opts(int argc, char **argv)
{
  int	i;
  int	b;

  b = 1;
  for (i = 1; i < argc; i++)
    {
      if (argv[i][0] != '-')
	b = 0;
    }
  return (b);
}

int	is_not_opt(char *str)
{
  if (str[0] == '-' && my_strlen(str) == 1)
    {
      return (1);
    }
  return (0);
}

int	exec_opt(int i, char **argv, t_opt *opts)
{
 int	y;

 if (my_strlen(argv[i]) > 2 && argv[i][0] == '-' &&
     argv[i][1] == '-' && argv[i][2] == '-')
   return (invalid_option('-'));
 for (y = 1; y < my_strlen(argv[i]); y++)
   {
     if (argv[i][y] == 'e')
       opts->e = 1;
     else if (argv[i][y] == 'n' && opts->b == 0)
       opts->n = 1;
     else if (argv[i][y] == 'b')
       {
	 opts->n = 0;
	 opts->b = 1;
       }
     else if (argv[i][y] != '-')
       return (invalid_option(argv[i][y]));
   }
 return (0);
}

int	my_opts(int argc, char **argv, t_opt *opts)
{
  int	i;

  opts->e = 0;
  opts->n = 0;
  opts->b = 0;
  for (i = 1; i < argc; i++)
    {
      if (argv[i][0] == '-')
	{
	  if (exec_opt(i, argv, opts))
	    return (1);
	}
    }
  return (0);
}

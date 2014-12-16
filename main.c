/*
** main.c for my_cat in /Users/robertmizielski/ETNA/my_cat/miziel_r
** 
** Made by MIZIELSKI Robert
** Login   <miziel_r@etna-alternance.net>
** 
** Started on  Fri Dec 12 17:29:17 2014 MIZIELSKI Robert
** Last update Sun Dec 14 12:18:42 2014 MIZIELSKI Robert
*/

#include "my_cat.h"

void	exec_cat(char *str, t_opt opts, int *nb, int *nl)
{
  int	i;

  for (i = 0; i < my_strlen(str); i++)
    {
      if (*nl && (opts.n || opts.b) &&
	  !(*nl && str[i] == '\n' && opts.b))
      	display_nb(*nb);
      if (str[i] == '\n')
	{
	  if (opts.e)
	    my_putchar('$');
	  if (!(*nl && opts.b))
	    *nb = *nb + 1;
	  *nl = 1;
	}
      else
	*nl = 0;
      my_putchar(str[i]);
    }
}

int	read_cat(t_opt opts)
{
  int	nl;
  int	nb;
  char	str[BUFF_SIZE + 1];

  my_init(&nl, &nb);
  clean_str(&str[0]);
  while (read(0, &str, BUFF_SIZE))
    {
      str[BUFF_SIZE] = 0;
      exec_cat(str, opts, &nb, &nl);
      clean_str(&str[0]);
    }
  return (0);
}

int	my_cat(char *filename, t_opt opts)
{
  int	nl;
  int	nb;
  int	file;
  char	str[BUFF_SIZE + 1];

  file = open(filename, O_RDONLY, BUFF_SIZE);
  if (file == -1)
    return (my_error(filename));
  my_init(&nl, &nb);
  while (read(file, &str, BUFF_SIZE))
    {
      str[BUFF_SIZE] = 0;
      exec_cat(str, opts, &nb, &nl);
    }
  close(file);
  return (0);
}

int	main(int argc, char **argv)
{
  int	i;
  t_opt	opts;

  if (my_opts(argc, argv, &opts))
    return (-1);
  if (argc == 1 || only_opts(argc, argv))
    read_cat(opts);
  for (i = 1; i < argc; i++)
    {
      if (argv[i] && argv[i][0] != '-')
	my_cat(argv[i], opts);
      else if (argv[i][0] == '-' && my_strlen(argv[i]) == 1)
	read_cat(opts);
    }
  return (0);
}

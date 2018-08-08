/*
** mysh.c for mysh in /home/jeremy.elkaim/PSU_2016_minishell2/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Apr  7 12:12:34 2017 jeremy elkaim
** Last update Fri Apr  7 12:12:35 2017 jeremy elkaim
*/
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/gnl.h"
#include <string.h>

void	my_putenv(char **env)
{
  int	count;

  count = 0;
  while (env[count])
    {
      my_putstr(env[count]);
      my_putchar('\n');
      count += 1;
    }
}

int	dispatch2(char *av, char **env, int i, int a)
{
  if (av[i] == 's' && av[i + 1] == 'e' && av[i + 2] == 't'
      && av[i + 3] == 'e' && av[i + 4] == 'n' && av[i + 5] == 'v')
    {
      my_putenv(env);
      i = i + 1;
      a = a + 1;
    }
  else if (av[i] == 'e' && av[i + 1] == 'n' && av[i + 2] == 'v')
    {
      my_putenv(env);
      i = i + 1;
      a = a + 1;
    }
  else
    {
      a, i = dispatch3(av, env, i, a);
    }
  return (a, i);
}

int	dispatch(char *av, char **env)
{
  int	i;
  int	a;

  a = 0;
  i = 0;
  while (av[i] != '\0' && a == 0)
    {
      if (av[i] == 'u' && av[i + 1] == 'n'
	  && av[i + 2] == 's' && av[i + 3] == 'e'
	  && av[i + 4] == 't' && av[i + 5] == 'e'
	  && av[i + 6] == 'n' && av[i + 7] == 'v')
	{
	  my_putenv(env);
	  i = i + 1;
	  a = a + 1;
	}
      else
	a, i = dispatch2(av, env, i, a);
    }
  return (0);
}

int	prompt()
{
  char	buffer[1000];
  int	i;

  i = 1;
  while (i == 1)
    {
      getcwd(buffer ,1001);
      my_putstr2(buffer);
      i = i + 1;
    }
  return (0);
}

int	main(int ac, char **av, char **env)
{
  char	*s;

  prompt();
  while (s = get_next_line(0))
    {
      dispatch(s, env);
      prompt();
      pip();
    }
  return (0);
}

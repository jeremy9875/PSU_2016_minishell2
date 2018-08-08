/*
** mysh2.c for mysh2 in /home/jeremy.elkaim/PSU_2016_minishell2/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Apr  5 16:26:37 2017 jeremy elkaim
** Last update Fri Apr  7 12:02:48 2017 jeremy elkaim
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      my_putchar(src[i]);
      i = i + 1;
    }
  dest[i] = src[i];
  return (dest);
}

void	str3(char *str, int i, int o)
{
  int	p;

  p = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '/')
        {
          p = p + 1;
        }
      if (p == o || p == o - 1)
        {
          my_putchar(str[i+1]);
        }
      i = i + 1;
    }
}

int	dispatch3(char *av, char **env, int i, int a)
{
  if (av[i] == 'e' && av[i + 1] == 'x'
      && av[i + 2] == 'i' && av[i + 3] == 't')
    {
      my_putstr("exit\n");
      exit (1);
      a = a + 1;
    }
  else if (av[i] == 'p' && av[i + 1] == 'w' && av[i + 2] == 'd')
    {
      pwd(av, env);
      i = i + 1;
      a = a + 1;
    }
  else if (av[i] == 'l' && av[i + 1] == 's')
    {
      ls(env);
      i = i + 1;
      a = a + 1;
    }
  else
    a, i = dispatch4(av, env, i, a);
  return (a, i);
}

int	dispatch4(char *av, char **env, int i, int a)
{
  if (av[i] == '|')
    {
      pip();
      i = i + 1;
      a = a + 1;
    }
  else if (av[i] == 'c' && av[i + 1] == 'd')
    {
      cd_function(av);
      i = i + 1;
      a = a + 1;
    }
  else
    i = i + 1;
  return (a, i);
}

/*
** write.c for write in /home/jeremy.elkaim/PSU_2016_minishell2/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Apr  7 12:12:44 2017 jeremy elkaim
** Last update Fri Apr  7 12:12:44 2017 jeremy elkaim
*/
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_putstr2(char *str)
{
  int	i;
  int	o;
  int	y;

  o = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '/')
        {
          o = o + 1;
        }
      i = i + 1;
    }
  i = 0;
  y = 0;
  str3(str, i, o);
  my_putchar('>');
  return (0);
}

int	my_strlen(char *av)
{
  int	counter;

  while (av[counter] != '\0')
    counter = counter + 1;
  return (counter);
}

char	**strmalloc(char **av, int counter)
{
  int	i;

  i = 0;
  av = malloc(sizeof(char) * counter);
  while (av[i] != '\0')
    {
      av[i] = malloc(sizeof(char) * 200);
      i = i + 1;
    }
  return (av);
}

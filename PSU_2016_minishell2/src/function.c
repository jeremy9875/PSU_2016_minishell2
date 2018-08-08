/*
** function.c for function in /home/jeremy.elkaim/PSU_2016_minishell2/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Apr  7 12:12:59 2017 jeremy elkaim
** Last update Fri Apr  7 12:12:59 2017 jeremy elkaim
*/
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

int	pip(int pipefr[2])
{
  return (0);
}

int	ls(char **env)
{
  pid_t	child;
  char	*newargv[] = {"", NULL };

  child = fork();
  if (child < 0)
    return (84);
  if (child == 0)
    {
      execve("/bin/ls", newargv, env);
      exit(0);
    }
  else
    wait(NULL);
  return (0);
}

int	cd_function(char *av)
{
  char	buffer[1000];
  char	*directory = "/";
  int	ret;

  if (av[0] == 'c' && av[1] == 'd')
    {
      ret = chdir ("home/usr/");
      if (av[3] == '-' && av[4] == '-')
	{
	  ret = chdir ("../");
	}
      else
	ret = chdir ("~");
    }
  return (0);
}

int	pwd(char *cmd, char **env)
{
  pid_t	child;
  char	builtins[7];
  char	*newargv[] = {"", NULL};

  child = fork();
  if (child < 0)
    return (84);
  if (child == 0)
    {
      execve("/bin/bash/pwd", newargv, env);
      exit(0);
    }
  else
    wait(NULL);
  return (0);
}

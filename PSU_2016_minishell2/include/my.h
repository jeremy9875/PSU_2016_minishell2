/*
** my.h for my in /home/jeremy.elkaim/PSU_2016_minishell2/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Apr  7 12:14:13 2017 jeremy elkaim
** Last update Fri Apr  7 12:14:14 2017 jeremy elkaim
*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

#ifndef MY_H_
#define MY_H_

void	my_putchar(char c);
int	my_putstr(char *str);
int	cd_function(char *av);
int	my_putstr2(char *str);
int	my_strlen(char *av);
void	my_putenv(char **env);
char	**str_to_wordtab(char *av, int wordnb);
int	pwd(char *cmd, char **env);
void	str3(char *str, int i, int o);
int	ls(char **env);
char	**strmalloc(char **av, int counter);
int	dispatch2(char *av, char **env, int i, int a);
int	dispatch3(char *av, char **env, int i, int a);
int	dispatch4(char *av, char **env, int i, int a);
int	dispatch(char *av, char **env);
char	*my_strcpy(char *dest, char *src);
int	prompt();
int	pip();

#endif /* !MY_H_ */

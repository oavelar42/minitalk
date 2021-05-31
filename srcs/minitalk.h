/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:55:55 by oavelar           #+#    #+#             */
/*   Updated: 2021/05/31 16:26:48 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <sys/types.h>
# include <stdio.h>
# include <stdlib.h>

int         ft_convert(unsigned char str, int dest, int count);
int         ft_putchar(unsigned char a);
int         ft_char(unsigned char b);
void	    ft_putstr(char const *s);
void	    ft_putstr_fd(char const *s, int fd);
void	    ft_putchar_fd(char c, int fd);
int         ft_num_neg(char *s);
int         ft_checker_num(char *s, int num, int count, int nb_true);
int         ft_get_num(char *s);
int	        ft_server(void);
void        ft_check(int point);
int         ft_number(int num);
int         ft_count(int num);
int         ft_check_neg(int num);
int         ft_check_max(int num);
int         ft_put_nb(int num);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:55:55 by oavelar           #+#    #+#             */
/*   Updated: 2021/05/28 22:06:30 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <sys/types.h>
# include <stdio.h>
# include <stdlib.h>

int         ft_putchar(unsigned char a);
int         ft_putchar(unsigned char a);
int         ft_num_neg(char *s);
int         ft_checker_num(char *s, int num, int count, int nb_true);
int         ft_get_num(char *s);

#endif
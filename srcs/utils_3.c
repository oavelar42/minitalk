/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:09:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/06/01 10:00:14 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
}

void	ft_putstr_fd(char const *s, int fd)
{
	if (s != NULL)
		while (*s)
			ft_putchar_fd(*(s++), fd);
}

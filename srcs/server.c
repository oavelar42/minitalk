/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:45:34 by oavelar           #+#    #+#             */
/*   Updated: 2021/05/30 18:55:38 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int ft_char(unsigned char b)
{
	write(1, &b, 1);
}

int ft_number(int num)
{
	int count;

	if (num < 0)
	{
		ft_char('-');
		num = num * - 1;
	}
	if (num > 0)
	{
		count = num % 10;
		num = num / 10;
		ft_number(num);
		ft_char(48 + count);
	}
}

void    ft_check(int point)
{
	static unsigned char	str = '\0';
	static int				i = 0;
	int						count;

	count = 1;
	if (point == SIGUSR1)
	{
		if (i < 7)
			str = str << 1;
		i++;
	}
	if (point == SIGUSR2)
	{
		str = str | count;
		if (i < 7)
			str = str << 1;
		i++;
	}
	if (i == 8)
	{
		ft_char(str);
		i = 0;
		str = '\0';
		count = 1;
	}
}

int	ft_server()
{
	int nb;

	nb = getpid();
	if (nb == -1)
		return (0);
	ft_number(nb);
	ft_char('\n');
	return (nb);
}

int main(int ac, char **av)
{
	int		count;
	char	*str;

	str = av[2];
	count = ft_server();
	signal(SIGUSR1, ft_check);
	signal(SIGUSR2, ft_check);
	while (1)
	{
	}
}
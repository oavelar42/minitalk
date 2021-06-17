/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:52:59 by oavelar           #+#    #+#             */
/*   Updated: 2021/06/17 21:34:46 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_putchar(unsigned char a)
{
	write(1, &a, 1);
	return (1);
}

int	ft_put_nb(int num)
{
	int	first;
	int	max;

	first = 0;
	max = ft_check_max(num);
	if (max == 0)
	{
		num = ft_check_neg(num);
		first = ft_count(num);
		while (first >= 1)
		{
			if (num / first > 0)
			{
				ft_putchar(48 + num / first);
				num = num % first;
			}
			else
			{
				ft_putchar(48);
			}
			first = first / 10;
		}
	}
	return (0);
}

int	ft_check_max(int num)
{
	int	max;

	max = 0;
	if (num == -2147483648)
	{
		max = 1;
		ft_putchar(45);
		ft_putchar(50);
		ft_putchar(49);
		ft_putchar(52);
		ft_putchar(55);
		ft_putchar(52);
		ft_putchar(56);
		ft_putchar(51);
		ft_putchar(54);
		ft_putchar(52);
		ft_putchar(56);
	}
	return (max);
}

int	ft_check_neg(int num)
{
	if (num < 0)
	{
		ft_putchar(45);
		num = num * -1;
	}
	return (num);
}

int	ft_count(int num)
{
	int	asci;
	int	first;

	first = 1;
	asci = 0;
	while (asci == 0)
	{
		if (num / first < 10)
			asci = 1;
		else
			first = first * 10;
	}
	return (first);
}

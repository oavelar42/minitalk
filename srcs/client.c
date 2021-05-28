/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:19:14 by oavelar           #+#    #+#             */
/*   Updated: 2021/05/28 17:13:13 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int ft_putchar(unsigned char a)
{
    write(1, &a, 1);
}

int ft_convert(unsigned char str, int dest, int count)
{
    if (count < 8)
    {
        ft_convert(str >> 1, dest, count + 1);
        if ((str % 2) == 0)
            kill(dest, SIGUSR1);
        else
            kill(dest, SIGUSR2);
        usleep(200);
    }
    return (0);
}

int main(int ac, char **av)
{
    int dest;
    int num;
    int count;

    count = 0;
    dest = ft_get_num(av[1]);
    if (ac == 3)
    {
        while (av[2][count] != '\0')
        {
            ft_convert(av[2][count], dest, 0);
            count++;
        }
    }
}
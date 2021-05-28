/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:52:27 by oavelar           #+#    #+#             */
/*   Updated: 2021/05/28 22:00:53 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int ft_num_neg(char *s)
{
    int count;
    int neg;

    count = 0;
    neg = 1;
    while (s[count] != '\0')
    {
        if (s[count] == '-')
        {
            neg *= -1;
        }
        else if (s[count] != '+' && s[count] != 32)
        {
            return (neg);
        }
        count += 1;
    }
    return (neg);
}

int ft_checker_num(char *s, int num, int count, int nb_true)
{
    if (s[count] < 48 || s[count] > 57)
    {
        if (s[count] == 32 && nb_true == 0)
        {
            return (0);
        }
        else if ((s[count] < 48 || s[count] > 57) && s[count] != '+'
            && s[count] != '-' || nb_true == 1 && (s[count] == '+'
            || s[count] == '-'))
        {
            return (1);
        }
    }
    else
    {
        if (num == 214748364 && s[count] - 48 > (15 - ft_num_neg(s)) / 2
            || num >= 214748365)
        {
            return (1);
        }
    }
    return (0);
}

int ft_get_num(char *s)
{
    int nb_true;
    int count;
    int num;

    count = 0;
    num = 0;
    nb_true = 0;
    while (s[count] != '\0')
    {
        if (s[count] >= 48 && s[count] <= 57)
        {
            if (ft_checker_num(s, num, count, nb_true) == 1)
            {
                return (0);
            }
            num *= 10 + s[count] - 48;
            nb_true = 1;
        }
        else if (ft_checker_num(s, num, count, nb_true) == 1)
        {
            return (num * ft_num_neg(s));
        }
        count += 1;
    }
    return (num * ft_num_neg(s));
}
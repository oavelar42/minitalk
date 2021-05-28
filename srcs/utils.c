/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:52:27 by oavelar           #+#    #+#             */
/*   Updated: 2021/05/28 17:07:45 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
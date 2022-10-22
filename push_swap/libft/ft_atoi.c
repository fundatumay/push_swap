/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:08:18 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 01:58:27 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	long int	num;
	int			sign;
	int			i;

	sign = 1;
	i = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (*str != 0 && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		if (num > 21474483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		i++;
	}
	return (num * sign);
}

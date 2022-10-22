/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:39:21 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 17:10:35 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isrepeat(int num, char **str, int i)
{
	i++;
	while (str[i])
	{
		if (ft_atoi(str[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *args)
{
	int	i;

	i = 0;
	if (args[0] == '-')
		i++;
	if (args[i] == '\0')
		return (1);
	while (args[i] != '\0')
	{
		if (!ft_isdigit(args[i]))
			return (1);
		i++;
	}
	return (0);
}

void	check_args(char **args)
{
	int	i;
	int	num;

	i = 1;
	while (args[i])
	{
		num = ft_atoi(args[i]);
		if (ft_isnum(args[i]))
			ft_error("Error\n");
		if (num < -2147483648 || num > 2147483647)
			ft_error("Error\n");
		if (ft_isrepeat(num, args, i))
			ft_error("Error\n");
		i++;
	}
}

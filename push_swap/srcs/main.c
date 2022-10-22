/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:58:07 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 16:57:31 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *a_stack)
{
	while (a_stack -> next != NULL)
	{
		if (a_stack -> content < a_stack -> next -> content)
			a_stack = a_stack -> next;
		else
			return (0);
	}
	return (1);
}

t_list	*pushswap(char **args)
{
	t_list	*a_stack;
	t_list	*b_stack;

	a_stack = (t_list *)malloc(sizeof(t_list));
	b_stack = (t_list *)malloc(sizeof(t_list));
	b_stack = NULL;
	a_stack = array_to_list(a_stack, args);
	if (is_sorted(a_stack))
	{
		ft_free_stack(a_stack);
		ft_free_stack(b_stack);
		return (NULL);
	}
	sort(a_stack, b_stack);
	ft_free_stack(a_stack);
	ft_free_stack(b_stack);
	return (a_stack);
}

int	main(int ac, char **av)
{
	char	**args;
	int		i;

	args = NULL;
	i = 1;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else if (ac < 2)
		return (-1);
	else
	{
		args = (char **)malloc(sizeof(char *) * (ac + 1));
		while (i < ac)
		{
			args[i - 1] = ft_strdup(av[i]);
			i++;
		}
		args[i - 1] = NULL;
	}
	check_args(args);
	pushswap(args);
	exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:42:24 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 16:58:03 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_list *a_stack, int size)
{
	if (size == 2)
		sa(&a_stack);
	else if (size == 3)
	{
		if (find_min_index(a_stack) == 0 && find_big_index(a_stack) == 1)
		{
			rra(&a_stack);
			sa(&a_stack);
		}
		else if (find_min_index(a_stack) == 1 && find_big_index(a_stack) == 2)
			sa(&a_stack);
		else if (find_min_index(a_stack) == 2 && find_big_index(a_stack) == 1)
			rra(&a_stack);
		else if (find_min_index(a_stack) == 1 && find_big_index(a_stack) == 0)
			ra(&a_stack);
		else if (find_min_index(a_stack) == 2 && find_big_index(a_stack) == 0)
		{
			sa(&a_stack);
			rra(&a_stack);
		}
	}
}

void	ft_sort_five(t_list *a_stack, t_list *b_stack)
{
	int	i;

	i = 0;
	while (ft_lstsize(a_stack) > 3)
	{
		i = find_min_index(a_stack);
		if (i <= ft_lstsize(a_stack) / 2 && i != 0)
			ra(&a_stack);
		else if (i >= ft_lstsize(a_stack) / 2 && i != 0)
			rra(&a_stack);
		else
			pb(&a_stack, &b_stack);
	}
	ft_sort_three(a_stack, 3);
	while (b_stack)
		pa(&a_stack, &b_stack);
}

void	radix_sort(t_list *a_stack, t_list *b_stack, int size, int i)
{
	int	data;
	int	j;

	while (is_sorted(a_stack) == 0)
	{
		j = 0;
		while (j < size)
		{
			data = ft_lstwhere(a_stack, 0)->index;
			if (((data >> i) & 1) == 1)
				ra(&a_stack);
			else
				pb(&a_stack, &b_stack);
			j++;
		}
		while (ft_lstsize(b_stack) > 0)
			pa(&a_stack, &b_stack);
		i++;
	}
}

void	sort(t_list *a_stack, t_list *b_stack)
{
	int	size;

	size = ft_lstsize(a_stack);
	if (size <= 3)
		ft_sort_three(a_stack, size);
	if (size == 5 || size == 4)
		ft_sort_five(a_stack, b_stack);
	else
		radix_sort(a_stack, b_stack, size, 0);
}

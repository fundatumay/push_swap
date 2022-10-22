/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_to_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:12:54 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 13:44:58 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//find_index içerisinde contenti yani o anki sayıyı diğer sayılarla karşılaş-
//tırır. Eğer küçük varsa indisi arttırır. Dizideki yerini bulur.

void	find_index(t_list *a_stack)
{
	int	content;
	int	other_numbers;
	int	i;
	int	k;
	int	indis;

	i = 0;
	while (i < ft_lstsize(a_stack))
	{
		indis = 0;
		content = ft_lstdata(a_stack, i);
		k = 0;
		while (k < ft_lstsize(a_stack))
		{
			other_numbers = ft_lstdata((a_stack), k);
			if (content > other_numbers)
				indis++;
			k++;
		}
		ft_lstwhere(a_stack, i)->index = indis;
		i++;
		if (i == ft_lstsize(a_stack))
			return ;
	}
}

t_list	*array_to_list(t_list *a_stack, char **args)
{
	t_list	*new;
	int		num;
	int		i;

	i = 0;
	num = ft_atoi(args[i]);
	a_stack->content = num;
	i++;
	while (args[i])
	{
		num = ft_atoi(args[i]);
		new = ft_lstnew(num);
		ft_lstadd_back(&a_stack, new);
		i++;
	}
	find_index(a_stack);
	return (a_stack);
}

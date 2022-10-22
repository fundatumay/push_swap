/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:24:13 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 14:50:10 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ft_lstdata fonk. c integerındaki dataya erişmek için kullan
// ft_lstwhere fonk. c integerının liste pointerını verir

int	find_big_index(t_list *a_stack)
{
	int		i;
	int		data;
	t_list	*temp;

	temp = a_stack;
	data = temp->content;
	i = 0;
	while (a_stack != NULL)
	{
		if (data >= a_stack->content && a_stack != NULL)
			a_stack = a_stack->next;
		else
		{
			temp = temp->next;
			data = temp->content;
			i++;
		}
	}
	return (i);
}

int	find_min_index(t_list *a_stack)
{
	int		i;
	int		data;
	t_list	*temp;

	temp = a_stack;
	data = a_stack->content;
	i = 0;
	while (a_stack != NULL)
	{
		if (data <= a_stack->content && a_stack != NULL)
			a_stack = a_stack->next;
		else
		{
			temp = temp->next;
			data = temp->content;
			i++;
		}
	}
	return (i);
}

int	ft_lstdata(t_list *a_stack, int c)
{
	int	data;
	int	i;

	i = 0;
	while (i <= c && a_stack != NULL)
	{
		data = a_stack->content;
		a_stack = a_stack->next;
		i++;
	}
	return (data);
}

t_list	*ft_lstwhere(t_list *a_stack, int c)
{
	int	i;

	i = 0;
	while (i < c && a_stack != NULL)
	{
		a_stack = a_stack->next;
		i++;
	}
	return (a_stack);
}

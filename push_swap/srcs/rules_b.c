/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:33:57 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 16:57:47 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **b_stack)
{
	int	temp;

	write (1, "sb\n", 3);
	temp = (*b_stack)-> next -> content;
	(*b_stack)-> next -> content = (*b_stack)->content;
	(*b_stack)-> content = temp;
}

void	pb(t_list **a_stack, t_list **b_stack)
{
	t_list	*temp;

	write (1, "pb\n", 3);
	temp = (*a_stack)-> next;
	ft_lstadd_front(b_stack, *a_stack);
	(*a_stack) = temp;
}

void	rb(t_list **b_stack)
{
	t_list	*frontlist;
	t_list	*backlist;

	write (1, "rb\n", 3);
	frontlist = (*b_stack)-> next;
	backlist = ft_lstlast(*b_stack);
	backlist -> next = (*b_stack);
	(*b_stack)-> next = NULL;
	(*b_stack) = frontlist;
}

void	rrb(t_list **b_stack)
{
	t_list	*lastlist;
	t_list	*temp;
	int		i;

	write (1, "rrb\n", 4);
	temp = (*b_stack);
	i = ft_lstlast(*b_stack)-> content;
	while (temp -> next -> next != NULL)
		temp = temp -> next;
	free(ft_lstlast(*b_stack));
	temp -> next = NULL;
	lastlist = malloc(sizeof(t_list));
	lastlist -> content = i;
	lastlist -> next = (*b_stack);
	*b_stack = lastlist;
}

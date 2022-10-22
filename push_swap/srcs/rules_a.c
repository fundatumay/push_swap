/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:01:00 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 15:15:10 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a_stack)
{
	int	temp;

	write(1, "sa\n", 3);
	temp = (*a_stack)->content;
	(*a_stack)->content = (*a_stack)->next->content;
	(*a_stack)->next->content = temp;
}

void	pa(t_list **a_stack, t_list **b_stack)
{
	t_list	*temp;

	write(1, "pa\n", 3);
	temp = (*b_stack)->next;
	ft_lstadd_front(a_stack, *b_stack);
	(*b_stack) = temp;
}

void	ra(t_list **a_stack)
{
	t_list	*frontlist;
	t_list	*backlist;

	write(1, "ra\n", 3);
	frontlist = (*a_stack)->next;
	backlist = ft_lstlast(*a_stack);
	backlist->next = (*a_stack);
	(*a_stack)->next = NULL;
	(*a_stack) = frontlist;
}

void	rra(t_list	**a_stack)
{
	t_list	*lastlist;
	t_list	*temp;
	int		data;

	write(1, "rra\n", 4);
	temp = (*a_stack);
	data = ft_lstlast(*a_stack)->content;
	while (temp->next->next != NULL)
		temp = temp->next;
	free((ft_lstlast(*a_stack)));
	temp->next = NULL;
	lastlist = malloc(sizeof(t_list));
	lastlist->content = data;
	lastlist->next = (*a_stack);
	(*a_stack) = lastlist;
}

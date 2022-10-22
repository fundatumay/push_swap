/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:32:04 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 15:15:56 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list *a_stack, t_list *b_stack)
{
	write(1, "ss\n", 3);
	sa(&a_stack);
	sb(&b_stack);
}

void	rr(t_list *a_stack, t_list *b_stack)
{
	write(1, "rr\n", 3);
	ra(&a_stack);
	rb(&b_stack);
}

void	rrr(t_list *a_stack, t_list *b_stack)
{
	write(1, "rrr\n", 4);
	rra(&a_stack);
	rrb(&b_stack);
}

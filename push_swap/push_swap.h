/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 04:18:17 by ftumay            #+#    #+#             */
/*   Updated: 2022/10/22 15:45:13 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stacklist
{
	int					content;
	int					size;
	int					index;
	struct s_stacklist	*next;
}	t_list;

t_list	*pushswap(char **args);
t_list	*array_to_list(t_list *a_stack, char **args);
void	find_index(t_list *a_stack);
void	ft_free_stack(t_list *stack);
void	ft_free_str(char **str);
void	ft_error(char *str);
int		ft_lstdata(t_list *a_stack, int c);
int		is_sorted(t_list *a_stack);
t_list	*ft_lstwhere(t_list *a_stack, int c);
void	check_args(char **args);
int		find_min_index(t_list *a_stack);
int		find_big_index(t_list *a_stack);
void	sort(t_list *a_stack, t_list *b_stack);
void	ft_push_small_from_a(t_list *a_stack, t_list *b_stack, int flag);
void	ft_sort_three(t_list *a_stack, int size);
void	ft_sort_five(t_list *a_stack, t_list *b_stack);
void	radix_sort(t_list *a_stack, t_list *b_stack, int size, int i);
//kurallar
void	sb(t_list **b_stack);
void	pb(t_list **a_stack, t_list **b_stack);
void	rb(t_list **b_stack);
void	rrb(t_list **b_stack);
void	sa(t_list **a_stack);
void	pa(t_list **a_stack, t_list **b_stack);
void	ra(t_list **a_stack);
void	rra(t_list	**a_stack);
void	ss(t_list *a_stack, t_list *b_stack);
void	rr(t_list *a_stack, t_list *b_stack);
void	rrr(t_list *a_stack, t_list *b_stack);
//libft
int		ft_atoi(char *str);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
char	**ft_split(const char *s, char c);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_putendl_fd(char *s, int fd);
int		ft_isdigit(int c);
char	*ft_strdup(char *str);

#endif

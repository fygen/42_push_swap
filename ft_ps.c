/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayegen <ayegen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:47:03 by ayegen            #+#    #+#             */
/*   Updated: 2024/06/27 18:49:24 by ayegen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *stack_a)
{
	int	tmp;
	int	a;

	a = ft_lstsize(stack_a);
	if (a <= 1)
		return ;
	if (stack_a && stack_a->next)
	{
		tmp = stack_a->value;
		stack_a->value = stack_a->next->value;
		stack_a->next->value = tmp;
	}
	ft_putstr_fd("sa\n", 1);
}

void	rra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*next_null;
	t_list	*tmp2;
	int		a;

	a = ft_lstsize(*stack_a);
	if (a <= 1)
		return ;
	tmp2 = *stack_a;
	tmp = ft_lstlast(*stack_a);
	while ((*stack_a)->next)
	{
		next_null = *stack_a;
		*stack_a = (*stack_a)->next;
	}
	tmp->next = tmp2;
	next_null->next = NULL;
	ft_putstr_fd("rra\n", 1);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		b;

	b = ft_lstsize(*stack_b);
	if (!b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		a;

	a = ft_lstsize(*stack_a);
	if (a == 0)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	ft_putstr_fd("pb\n", 1);
}

void	ra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = tmp;
	tmp->next = NULL;
	ft_putstr_fd("ra\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_ps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayegen <ayegen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:47:03 by ayegen            #+#    #+#             */
/*   Updated: 2024/06/27 18:49:51 by ayegen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list *a)
{
	int		i;

	i = a->value;
	while (a)
	{
		if (a->value < i)
			i = a->value;
		a = a->next;
	}
	return (i);
}

int	ft_checksorted(t_list *stack_a)
{
	int	i;

	i = stack_a->value;
	while (stack_a)
	{
		if (i > stack_a->value)
			return (0);
		i = stack_a->value;
		stack_a = stack_a->next;
	}
	return (1);
}

void	small_five(t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	if (ft_lstsize(*stack_a) == 2 && !ft_checksorted(*stack_a))
		sa(*stack_a);
	else if (ft_lstsize(*stack_a) == 3 && !ft_checksorted(*stack_a))
		ft_sort_three(stack_a);
	else if ((ft_lstsize(*stack_a) == 4 && !ft_checksorted(*stack_a)))
		ft_sort_four(stack_a, stack_b);
	else if ((ft_lstsize(*stack_a) == 5 && !ft_checksorted(*stack_a)))
		ft_sort_five(stack_a, stack_b);
}

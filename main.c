/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayegen <ayegen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:47:03 by ayegen            #+#    #+#             */
/*   Updated: 2024/07/12 19:26:15 by ayegen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check(t_list **stack, int ac, char **av)
{
	t_list	*new;
	char	**args;
	int		i;
	char	*str;

	str = 0;
	i = 1;
	while (i < ac)
	{
		str = ft_join_strings(str, av[i]);
		str = ft_join_strings(str, " ");
		i++;
	}
	args = ft_split2(str, ' ');
	i = 0;
	while (args[i])
	{
		new = ft_lstnew(ft_atoi2(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	ft_free_split(args);
	free(str);
	index_stack(stack);
}

static void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		small_five(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) > 5 && !ft_checksorted(*stack_a))
		radix_sort(stack_a, stack_b);
}

void	ft_free_stack(t_list **stack)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (-1);
	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));
	*stack_a = 0;
	*stack_b = 0;
	ft_check(stack_a, argc, argv);
	ft_check_duplicates(*stack_a);
	sort_stack(stack_a, stack_b);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}

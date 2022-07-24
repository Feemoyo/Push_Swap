/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:12:32 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/24 02:28:25 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_init_stack(int n, t_stack *stack_a, t_stack *stack_b)
{
	stack_a->n = n;
	stack_a->array = malloc(n * sizeof(int));
	if (!(stack_a->array))
		return (1);
	stack_b->n = 0;
	stack_b->array = malloc(n * sizeof(int));
	if (!(stack_b->array))
	{
		free(stack_a->array);
		return (1);
	}
	return (0);
}

static void	ft_error(t_stack *stack_a, t_stack *stack_b, int i)
{
	if (i)
	{
		free(stack_a->array);
		free(stack_b->array);
	}
	write(1, "Error\n", 6);
	exit(1);
}

static void	ft_no_leaks(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->array);
	free(stack_b->array);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ft_init_stack(argc - 1, &stack_a, &stack_b))
		ft_error(&stack_a, &stack_a, 0);
	if (ft_check_args(argc, argv, &stack_a, &stack_a))
		ft_error(&stack_a, &stack_b, 1);
	if (ft_check_stack(&stack_a))
	{
		ft_no_leaks(&stack_a, &stack_b);
		return (0);
	}
	if (stack_a.n <= 3)
		ft_micro_sort(&stack_a, &stack_b);
	else if (stack_a.n <= 14)
		ft_little_sort(&stack_b, &stack_b);
	else if (stack_a.n <= 190)
		ft_medium_sort(&stack_a, &stack_b, 6);
	else
		ft_big_sort(&stack_a, &stack_b, 5, 6);
	if (stack_a.array)
		ft_no_leaks(&stack_a, &stack_b);
	return (0);
}

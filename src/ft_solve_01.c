/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:13:08 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/24 03:09:34 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_stack(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->n - 1)
		if (stack->array[i] > stack->array[i + 1])
			return (0);
	return (1);
}

void	ft_micro_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_check_stack(stack_a))
		return ;
	else if (stack_a->n == 2)
		ft_sm(stack_a, stack_b, 'a');
	else
	{
		if (stack_a->array[0] < stack_a->array[1])
		{
			ft_rrm(stack_a, stack_a, 'a');
			if (stack_a->array[0] > stack_a->array[1])
				ft_sm(stack_a, stack_b, 'a');
		}
		else
		{
			if (stack_a->array[0] < stack_a->array[2])
				ft_sm(stack_a, stack_b, 'a');
			else
			{
				ft_rm(stack_a, stack_b, 'a');
				if (stack_a->array[0] > stack_a->array[1])
					ft_sm(stack_a, stack_b, 'a');
			}
		}
	}
}

void	ft_little_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	little;
	int	i;
	int	j;

	i = 0;
	little = ft_get_little(stack_a);
	while (stack_a->n != 3 && ++little && ++i)
	{
		j = 0;
		while (stack_a->array[j] != little - 1)
			j++;
		if (j <= stack_a->n / 2)
			while (j--)
				ft_rm(stack_a, stack_b, 'a');
		else
			while (j++ < stack_b->n)
				ft_rrm(stack_a, stack_b, 'a');
		ft_pm(stack_a, stack_b, 'b');
	}
	ft_micro_sort(stack_a, stack_b);
	while (i--)
		ft_pm(stack_a, stack_b, 'a');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:20:46 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/23 13:04:40 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isnum(int n, char **str)
{
	int	i;
	int	j;

	i = 0;
	while (++i < n)
	{
		j = -1;
		if (*(*(str + i)) == '-' || *(*(str + i)) == '+')
			j++;
		while (*(*(str + i) + ++j))
			if (!(ft_isdigit(*(*(str + i) + j))))
				return (1);
	}
	return (0);
}

static int	ft_isint(int n, char **str, t_stack *stack)
{
	long int	num;
	int			i;

	i = 0;
	while (++i < n)
	{
		num = ft_atod(*(str + i));
		if (num < INT_MIN || num > INT_MAX)
			return (1);
		stack_array[i - 1] = (int)num;
	}
	return (0);
}

static int	ft_isrepeat(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	while (++i < stack_a->n)
	{
		k = -1;
		while (++k < j)
			if (stack_a->array[i] == stack_b->array[k])
				return (1);
		stack_b->array[j] = stack_a->array[i];
		j++;
	}
	return (0);
}

static void	ft_replace_nums(t_stack *stack_a, t_stack *stack_b)
{
	int	count;
	int	i;
	int	j;

	i = -1;
	while (++i < stack_a->n)
	{
		j = -1;
		count = 0;
		while (++j < a->n)
			if (a->array[i] > a->array[j])
				count++;
		stack_b->array[i] = count + 1;
	}
	i = -1;
	while (++i < stack_a->n)
		stack_a->array[i] = stack_b->array[i];
}

int	ft_check_args(int n, char **args, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_isnum(n, args))
		return (1);
	if (ft_isint(n, args, stack_a))
		return (1);
	if (ft_isrepeat(stack_a, stack_b))
		return (1);
	ft_replace_nums(stack_a, stack_b);
	return (0);
}

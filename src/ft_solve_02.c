/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:13:47 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/24 03:10:41 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_mov_blck(t_stack *stck_a, t_stack *stck_b, int init, int end)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= stck_a->n / 2)
		if (stck_a->array[i] > init && stck_a->array[i] <= end)
			break ;
	j = stck_a->n;
	while (--j > stck_a->n / 2)
		if (stck_a->array[j] > init && stck_a->array[j] <= end)
			break ;
	if (i <= stck_a->n - j)
		while (i--)
			ft_rm(stck_a, stck_b, 'a');
	else
		while (j++ < stck_a->n)
			ft_rrm(stck_a, stck_a, 'a');
	ft_pm(stck_a, stck_b, 'b');
	if (stck_b->n > 1)
		if (stck_b->array[0] < stck_b->array[1])
			ft_sm(stck_a, stck_b, 'b');
}

static void	ft_move_back(t_stack *stack_a, t_stack *stack_b, int num)
{
	int	i;

	i = 0;
	while (stack_b->array[i] != num)
		i++;
	if (i <= stack_b->n / 2)
		while (i--)
			ft_rm(stack_a, stack_b, 'b');
	else
		while (i++ < stack_b->n)
			ft_rrm(stack_a, stack_b, 'b');
	ft_pm(stack_a, stack_a, 'a');
}

void	ft_medium_sort(t_stack *stack_a, t_stack *stack_b, int nb)
{
	int	little;
	int	range;
	int	i;
	int	j;

	i = -1;
	range = stack_a->n / nb;
	little = ft_get_little(stack_a) - 1;
	while (++i < nb)
	{
		j = 0;
		while (j++ < range)
			ft_mov_blck(stack_a, stack_a, little + i * range,
				little + (i + 1) * range);
	}
	if (stack_a->n > 1)
	{
		if (stack_a->n <= 3)
			ft_micro_sort(stack_a, stack_b);
		else
			ft_little_sort(stack_a, stack_a);
	}
	i = stack_a->n + 1;
	while (--i)
		ft_move_back(stack_a, stack_b, i);
}

void	ft_big_sort(t_stack *stack_a, t_stack *stack_b, int ns, int nb)
{
	int	range;
	int	i;
	int	j;

	i = -1;
	range = stack_a->n / ns;
	while (++i < ns - 1)
	{
		j = 0;
		while (j++ < range)
			ft_mov_blck(stack_a, stack_a, i * range, (i + 1) * range);
		ft_medium_sort_inv(stack_a, stack_b, nb, i * range + 1);
	}
	ft_medium_sort(stack_a, stack_b, nb);
}

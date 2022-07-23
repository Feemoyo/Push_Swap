/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_inv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:33:15 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/24 01:33:09 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_mov_blck_inv(t_stack *stck_a, t_stack *stck_b, int init, int end)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= stck_b->n / 2)
		if (stck_b->array[i] > init && stck_b->array[i] <= end)
			break ;
	j = stck_b->n;
	while (--j > stck_b->n / 2)
		if (stck_b->array[j] > init && stck_b->array[j] <= end)
			break ;
	if (i <= stck_b->n - j)
		while (i--)
			ft_rm(stck_a, stck_b, 'b');
	else
		while (j++ < stck_b->n)
			ft_rrm(stck_a, stck_b, 'b');
	ft_pm(stck_a, stck_b, 'a');
	if (stck_a->n > 1)
		if (stck_a->array[0] > stck_a->array[1])
			ft_sm(stck_a, stck_b, 'a');
}

static void	ft_move_back_inv(t_stack *stck_a, t_stack *stck_b, int num)
{
	int	i;

	i = 0;
	while (stck_a->array[i] != num)
		i++;
	if (i <= stck_a->n / 2)
		while (i--)
			ft_rm(stck_a, stck_b, 'a');
	else
		while (i++ < stck_a->n)
			ft_rrm(stck_a, stck_b, 'a');
	ft_pm(stck_a, stck_b, 'b');
}

void	ft_medium_sort_inv(t_stack *stck_a, t_stack *stck_b, int nb, int init)
{
	int	little;
	int	range;
	int	j;
	int	i;

	i = nb;
	range = (stck_b->n - init + 1) / nb;
	little = init + (stck_b->n - init + 1) % nb - 1;
	while (i--)
	{
		j = 0;
		while (j++ < range)
			ft_mov_blck_inv(stck_a, stck_a, little + i * range,
				little + (i + 1) * range);
	}
	i = little;
	while (++i <= little + range * nb)
		ft_move_back_inv(stck_a, stck_b, i);
}

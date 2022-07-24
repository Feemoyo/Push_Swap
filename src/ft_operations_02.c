/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_02.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:49:31 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/24 17:13:50 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sm(t_stack *stack_a, t_stack *stack_b, char c)
{
	if (c == 'a' || c == 's')
		ft_s_stack(stack_a);
	if (c == 'b' || c == 's')
		ft_s_stack(stack_b);
	write(1, "s", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	ft_rm(t_stack *stack_a, t_stack *stack_b, char c)
{
	if (c == 'a' || c == 'r')
		ft_r_stack(stack_a);
	if (c == 'b' || c == 'r')
		ft_r_stack(stack_b);
	write(1, "r", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	ft_rrm(t_stack *stack_a, t_stack *stack_b, char c)
{
	if (c == 'a' || c == 'r')
		ft_rr_stack(stack_a);
	if (c == 'b' || c == 'r')
		ft_rr_stack(stack_b);
	write(1, "rr", 2);
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	ft_pm(t_stack *stack_a, t_stack *stack_b, char c)
{
	if (c == 'a')
		ft_p_stack(stack_b, stack_a);
	else
		ft_p_stack(stack_a, stack_b);
	write(1, "p", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}

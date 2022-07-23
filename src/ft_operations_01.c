/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_01.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:49:31 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/23 15:15:35 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_s_stack(t_stack *stack)
{
	int	aux;

	aux = stack->array[0];
	stack->array[0] = stack->array[1];
	stack->array[1] = aux;
}

void	ft_r_stack(t_stack *stack)
{
	int	aux;
	int	i;

	i = -1;
	aux = stack->array[0];
	while (++i < stack->n - 1)
		stack->array[i] = stack->array[i + 1];
	stack->array[i] = temp;
}

void	ft_rr_stack(stack *stack)
{
	int	aux;
	int	i;

	i = stack->n;
	aux = stack->array[stack->n - 1];
	while (--i > 0)
		stack->array[i] = stack->array[i - 1];
		stack->array[i] = aux;
}

void	ft_p_stack(t_stack *stack_sender, t_stack *stack_recipient)
{
	int	aux;
	int	i;

	i = -1;
	aux = stack_sender->array[0];
	while (++i < stack_sender->n - 1)
		stack_sender->array[i] = stack_sender->array[i + 1];
	stack_sender->n--;
	i = stack_recipient->n;
	while (i-- > 0)
		stack_recipient->array[i + 1] = stack_recipient->array[i];
	stack_recipient->array[0] = aux;
	stack_recipient->n++;
}

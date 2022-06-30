/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_01.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:49:31 by fmoreira          #+#    #+#             */
/*   Updated: 2022/06/22 22:12:54 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sx(t_list *stack)
{
	long long int	aux;

	aux = stack->param->value;
	stack->param->value = stack->param->next->value;
	stack->param->next->value = aux;
}

void	ft_px(t_list *stack_sender, t_list *stack_recipient)	//necessita cuidar caso "stk_r" estiver vazia
{																//cuidar se stk_s estiver vazia
	t_param	*aux1;

	aux1 = stack_sender->param;
	stack_sender->param =stack_sender->param->next;
	aux1->next = stack_recipient->param;
	stack_recipient->param = aux1;
	stack_sender->size--;
	stack_recipient->size++;
}

void	ft_rx(t_list *stack)
{
	size_t	i;
	t_param	*aux1;
	t_param	*aux2;

	aux1 = stack->param;
	stack->param = stack->param->next;
	aux2 = stack->param;
	i = 2;
	while (i < stack->size)
	{
		aux2 = aux2->next;
		i++;
	}
	aux1->next = NULL;
	aux2->next = aux1;
}

void	ft_rrx(t_list *stack)
{
	size_t	i;
	t_param	*aux1;
	t_param	*aux2;
	
	i = 2;
	aux1 = stack->param;
	while (i < stack->size )
	{
		aux1 = aux1->next;
		if (i == stack->size - 1)
		{
			aux2 = aux1->next;
			aux1->next = NULL;
			aux2->next = stack->param;
			stack->param = aux2;
		}
		i++;
	}
}

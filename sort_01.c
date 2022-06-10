/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:49:31 by fmoreira          #+#    #+#             */
/*   Updated: 2022/06/10 18:23:04 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list *stack)
{
	long long int	aux;

	aux = stack->param->value;
	stack->param->value = stack->param->next->value;
	stack->param->next->value = aux; 
}

void	ft_pp(t_list *stack_sender, t_list *stack_recipient)	//necessita cuidar caso "stk_r" estiver vazia
{																//cuidar se stk_s estiver vazia
	t_param	*aux1;
	t_param	*aux2;

	aux1 = stack_recipient->param;
	aux2 = stack_sender->param;
	stack_sender->param =stack_sender->param->next;
	aux2->next = aux1;
	stack_recipient->param = aux2;
	stack_sender->size++;
	stack_recipient->size--;
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
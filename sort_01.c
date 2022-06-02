/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:49:31 by fmoreira          #+#    #+#             */
/*   Updated: 2022/06/02 19:57:40 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list *stack)
{
	long long int	aux;

	printf("socorro1");
	aux = stack_a->param->value;
	stack_a->param->value = stack_a->param->next->value;
	stack_a->param->next->value = aux; 
}
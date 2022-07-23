/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:13:47 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/22 00:42:44 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_biggest(t_list	*stack, int arg)
{
	int		big_num;
	int		node_num;
	t_param	*aux;
	int		i;

	i = arg;
	big_num = 0;
	node_num = arg;
	aux = stack->param;
	while (arg)
	{
		if (big_num < aux->value)
		{
			big_num = aux->value;
			i -= (i - arg);
		}
		aux = aux->next;
		arg--;
	}
	return (node_num - i + 1);
}

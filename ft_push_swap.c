/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:12:32 by fmoreira          #+#    #+#             */
/*   Updated: 2022/06/02 19:46:30 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int 	count;
	int		ok;
	t_list	stack_b;
	t_list	stack_a;

	count = 1;
	ok = 0;
	if (argc == 1)
	{
		ft_putstr_fd("**RETURN PROMP BACK**\n", 1);
		return (1);
	}
	stack_a.size = argc - 1;						// qtd arg == qtd obj_stack 
	ft_inialize_params(&stack_a);					// <---
	while (ok == 0)
	{
		if(ft_isdifnbr(argv[count], &stack_a))
		{
			ft_putstr_fd("Error\n", 1);
			exit(1);
		}
		count++;
		if (argv[count] == 0)
		{
			count = 1;
			ok = 1;
		}
	}	
	printf("\n**** 1 passada ****");
	ft_insert_value(&stack_a);
	printf("\n**** 2 passada com sa ****\n");
	ft_ss(&stack_a);
	
	ft_insert_value(&stack_a);		// print stack_a
	return(0);
}

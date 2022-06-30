/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:12:32 by fmoreira          #+#    #+#             */
/*   Updated: 2022/06/22 22:13:12 by fmoreira         ###   ########.fr       */
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
	ft_inialize_params(&stack_a, &stack_b);					// <---
	ft_more_params(&stack_b, 8);
	while (ok == 0)
	{
		if(ft_isdifnbr(argv[argc - count], &stack_a))
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
	
	ft_insert_value(&stack_a);
	write(1, "*****\n", 6);
	ft_px(&stack_b, &stack_a);
	ft_insert_value(&stack_a);		// print stack_a
	printf("\nstack_b->size: %lld\n", stack_b.size);
	printf("\nstack_a->size: %lld\n", stack_a.size);
	return(0);
}

//void	ft_socorro_deus(**argv,)
//{}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:12:32 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/22 00:40:45 by fmoreira         ###   ########.fr       */
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
		ft_putstr_fd("**RETURN PROMPT BACK**\n", 1);
		return (1);
	}
	stack_a.size = argc - 1;
	ft_inialize_params(&stack_a, &stack_b);
	//ft_more_params(&stack_b, 800);
	while (ok == 0)
	{
		if(ft_isdifnbr(argv[argc - count], &stack_a))
		{
			ft_putstr_fd("Error\n", 1);
			exit(1);
		}
		count++;
		if (argv[count] == 0)
			ok = 1;
	}
	ft_find_biggest(&stack_a, argc - 1);
	return(0);
}

//void	ft_socorro_deus(**argv,)
//{}
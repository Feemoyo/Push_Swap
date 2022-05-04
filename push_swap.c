/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:12:32 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/04 21:02:41 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int arg, char **argv)
{
	int 	count;
	int		ok;
	char	*str;
	t_param	*list;
	count = 1;
	ok = 0;

	list = ft_inialize_params();
	while (ok == 0)
	{
		if(ft_isdifnbr(argv[count], list))
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
	ft_insert_value(list);
	/*while (argv[count] != 0)
	{
		ft_putnbr_fd(ft_atoi(argv[count]), 1);
		write(1, " ", 1);
		count++;
	}
	write(1, "\n", 1);*/
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:12:32 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/18 20:37:48 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int 	count;
	int		ok;
	char	*str;
	t_list	*list;
	count = 1;
	ok = 0;
	
	if (argc == 1)
	{
		ft_putstr_fd("No params\n", 1);
		return (1);
	}
	printf("bbbbb\n");
	ft_inialize_params(list);
	printf("bbbbb\n");
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

	return(0);
}

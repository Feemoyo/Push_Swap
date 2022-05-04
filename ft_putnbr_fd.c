/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:25:47 by fmoreira          #+#    #+#             */
/*   Updated: 2022/04/27 19:38:23 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (n < 0)
	{
		write(fd, "-", sizeof(char));
		i = (long int)n * -1;
	}
	n = (i % 10) + '0';
	i = i / 10;
	if (i != (i > 0 && i < 1))
		ft_putnbr_fd(i, fd);
	write(fd, &n, sizeof(char));
}

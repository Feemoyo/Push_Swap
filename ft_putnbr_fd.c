/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:25:47 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/18 16:55:05 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putnbr_fd(long long int n, int fd)
{
	size_t	i;

	i = n;
	if (n < 0)
	{
		write(fd, "-", sizeof(char));
		i = (size_t)n * -1;
	}
	n = (i % 10) + '0';
	i = i / 10;
	if (i != (i > 0 && i < 1))
		ft_putnbr_fd(i, fd);
	write(fd, &n, sizeof(char));
}

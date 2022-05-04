/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:17:15 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/04 17:13:13 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef	struct	s_param
{
	size_t	param;
	struct s_param *next_param;
}	t_param;

int	ft_atoi(const char *nptr);
int	ft_isalnum (int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *s);
int	ft_isdifnbr(const char *s, t_param *param);
t_param	*ft_more_params(t_param *helpme, size_t param);
t_param	*ft_inialize_params(void);
#endif

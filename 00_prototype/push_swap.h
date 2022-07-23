/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:17:15 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/22 00:16:55 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_param
{
	long long int	value;
	struct s_param	*next;
}	t_param;

typedef struct s_list
{
	long long int	size;
	struct s_param	*param;
}	t_list;

int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(long long int n, int fd);
size_t	ft_strlen(const char *s);
int		ft_isdifnbr(const char *s, t_list *param);
void	ft_more_params(t_list *helpme, long long int param);
void	ft_inialize_params(t_list *list_a, t_list *list_b);
void	ft_insert_value(t_list *list);
t_param	*ft_node_format(t_param *node);
void	ft_sx(t_list *stack);
void	ft_px(t_list *stack_sender, t_list *stack_recipient);
void	ft_rx(t_list *stack);
void	ft_rrx(t_list *stack);
void	ft_find_biggest(t_list	*stack, int arg);

#endif

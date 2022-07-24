/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:17:15 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/24 01:45:33 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	n;
	int	*array;
}		t_stack;

static int	ft_isnum(int n, char **str);
static int	ft_isint(int n, char **str, t_stack *stack);
static int	ft_isrepeat(t_stack *stack_a, t_stack *stack_b);
static void	ft_replace_nums(t_stack *stack_a, t_stack *stack_b);
int	ft_check_args(int n, char **args, t_stack *stack_a, t_stack *stack_b);
void	ft_s_stack(t_stack *stack);
void	ft_r_stack(t_stack *stack);
void	ft_rr_stack(t_stack *stack);
void	ft_p_stack(t_stack *stack_sender, t_stack *stack_recipient);
int	ft_check_stack(t_stack *stack);
void	ft_micro_sort(t_stack *stack_a, t_stack *stack_b);
void	ft_little_sort(t_stack *stack_a, t_stack *stack_b);
static void	ft_mov_blck(t_stack *stck_a, t_stack *stck_b, int init, int end);
static void	ft_move_back(t_stack *stack_a, t_stack *stack_b, int num);
void	ft_medium_sort(t_stack *stack_a, t_stack *stack_b, int nb);
void	ft_big_sort(t_stack *stack_a, t_stack *stack_b, int ns, int nb);
int	ft_get_little(t_stack *stack);
int	ft_isdigit(int c);
int	ft_isspace(int c);
double	ft_atod(const char *nptr);

#endif

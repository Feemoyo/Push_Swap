/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:20:46 by fmoreira          #+#    #+#             */
/*   Updated: 2022/06/30 20:29:04 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdifnbr(const char *s, t_list *list)
{
	int i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= 48 && s[i] <= 57)
		i++;
	if (s[i] != 0)
		return (1);
	ft_more_params(list, ft_atoi(s));
	return (0);
}

void	ft_more_params(t_list *list, long long int param)
{
	t_param *new;
	
	new = ft_node_format(new);
	new->value = param;
	new->next = list->param;
	list->param = new;
	list->size++;
}

void	ft_inialize_params(t_list *list_a, t_list *list_b)
{
	list_a->param = NULL;
	list_a->size = 0;
	list_b->param = NULL;
	list_b->size = 0;
	//return (list);
}

void	ft_insert_value(t_list *list)
{
	t_param	*aux;

	aux = ft_node_format(aux);
	aux = list->param;
	while (aux != NULL)
	{
		ft_putnbr_fd(aux->value, 1);
		write(1, "\n", 1);
		aux = aux->next;
	}
}

t_param *ft_node_format(t_param *node)
{
	node = (t_param *)malloc(sizeof(t_param));
	if (!node)
		exit(0); 
	return (node);
}
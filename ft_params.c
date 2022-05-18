/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:20:46 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/18 20:42:20 by fmoreira         ###   ########.fr       */
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
	t_param *aux;
	
	aux = (t_param *)malloc(sizeof(t_param));
	aux->value = param;
	aux->next = list->param; //erro here
		printf("aaaa\n");
	list->param = aux;
	list->size++;
}

void	ft_inialize_params(t_list *list)
{
	list->param = NULL;
	list->size = 0;
	//return (list);
}

void	ft_insert_value(t_list *list)
{
	t_list	*aux;

	aux = list;
	while (aux->param != NULL)
	{
		//printf("socorro v4\n");
		ft_putnbr_fd(aux->param->value, 1);
		printf("info = %lld\n", aux->param->value);
		write(1, "\n", 1);
		aux->param = aux->param->next;
	}
}
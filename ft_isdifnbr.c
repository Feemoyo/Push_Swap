/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdifnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:20:46 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/04 20:55:53 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdifnbr(const char *s, t_param *list)
{
	int i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= 48 && s[i] <= 57)
		i++;
	if (s[i] != 0)
		return (1);
	list = ft_more_params(list, ft_atoi(s));
	return (0);
}

t_param	*ft_more_params(t_param *list, size_t param)
{
	t_param *atention;
	
	atention = (t_param*)malloc(sizeof(t_param));
	atention->info = param;
	atention->next = list;
	return (atention);
}

t_param	*ft_inialize_params(void)
{
	return (NULL);
}

t_param	*ft_insert_value(t_param *list)
{
	t_param	*param;
	
	param = list;
	while (param != NULL)
	{
		ft_putnbr_fd(param->info, 1);
		param = param->next;
	}
}
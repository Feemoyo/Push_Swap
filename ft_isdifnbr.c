/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdifnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:20:46 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/04 17:11:37 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdifnbr(const char *s, t_param *param)
{
	int i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= 48 && s[i] <= 57)
		i++;
	if (s[i] != 0)
		return (1);
	param = ft_more_params(param, ft_atoi(s));
	return (0);
}

t_param	*ft_more_params(t_param *helpme, size_t param)
{
	t_param *atention;
	
	atention = (t_param*)malloc(sizeof(t_param));
	atention->param = param;
	atention->next_param = helpme;
	return (atention);
	
}

t_param	*ft_inialize_params(void)
{
	return (NULL);
}
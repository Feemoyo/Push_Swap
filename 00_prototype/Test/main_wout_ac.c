/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_wout_ac.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:03:46 by fmoreira          #+#    #+#             */
/*   Updated: 2022/07/21 22:17:27 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*** Main Withouy Argument Check ***/

typedef	struct	s_lista	// struct padrao que estou utilizando em todos os tests //
{
	long long int info;
	struct s_lista *prox;
}	t_lista;

t_lista	*ft_inicializada(void) 	// apenas para inicializar a lista encadeada, é importante
{								// pois precisamos ter um fim. (A Lista encadeada inverte os valores colocado)
	return (NULL);
}

t_lista	*ft_insere(t_lista *l, long long int i)				// uma funçao para criar uma nova struct e atribuir ela para
{													// a struct anterior
	t_lista *novo;
	
	novo = (t_lista*) malloc(sizeof(t_lista));
	novo->info = (long long int)i;
	novo->prox = l;
	return (novo);
}

void	ft_imprime(t_lista *l)			// funçao para imprimir os valores
{
	t_lista	*p;

	p = l;
	while (p != NULL)
	{
		//printf("info = %lld\n", p->info);
		p = p->prox;
	}
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	np;

	i = 0;
	j = 0;
	np = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			np = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		j = (j * 10) + (nptr[i] - 48);
		i++;
	}
	return (j * np);
}

int	main(int argc, char **argv)		// main onde passo apenas 5 parametros, pode reparar que
{									// a funct "imprime" é meio que anulada por ela pois sobrescreve com char o /0
	t_lista *l;
	int	i;
	//int atoii;
	
	i = 1;
	l = ft_inicializada();
	while (i <= 5)
	{
		//printf("aopa\n");
		//atoii = ft_atoi(argv[i]);
		l = ft_insere(l, ft_atoi(argv[i]));
		i++;
	}
	ft_imprime(l);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_wout_ac.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:03:46 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/04 20:17:05 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*** Main Withou Argument Check ***/

typedef	struct	s_lista	// struct padrao que estou utilizando em todos os tests //
{
	char *info;
	struct s_lista *prox;
}	t_lista;

t_lista	*inicializada(void) 	// apenas para inicializar a lista encadeada, é importante
{								// pois precisamos ter um fim. (A Lista encadeada inverte os valores colocado)
	return (NULL);
}

t_lista	*insere(t_lista *l, char *i)				// uma funçao para criar uma nova struct e atribuir ela para
{													// a struct anterior
	t_lista *novo;
	novo = (t_lista*) malloc(sizeof(t_lista));
	novo->info = i;
	novo->prox = l;
	return (novo);
}

void	imprime(t_lista *l)			// funçao para imprimir os valores
{
	t_lista	*p;

	p = l;
	while (p != NULL)
	{
		printf("info = %s\n", p->info);
		p = p->prox;
	}
}

int	main(int argc, char **argv)		// main onde passo apenas 5 parametros, pode reparar que
{									// a funct "imprime" é meio que anulada por ela pois sobrescreve com char o /0
	t_lista *l;
	int	i;
	
	i = 1;
	l = inicializada();
	while (i <= 5)
	{
		l = insere(l, argv[i]);
		i++;
	}
	imprime(l);
}
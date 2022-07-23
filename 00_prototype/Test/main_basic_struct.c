/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_basic_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:20:27 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/04 20:19:25 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*** Entendimento de uma lista encadeada ***/

typedef struct s_lista		// struct padrao que estou utilizando em todos os tests //
{
	size_t info;
	struct s_lista *prox;
}	t_lista;

t_lista	*inicializada(void)		// apenas para inicializar a lista encadeada, é importante
{								// pois precisamos ter um fim. (A Lista encadeada inverte os valores colocado)
	return (NULL);
}

t_lista	*insere(t_lista *l, size_t i)	// uma funçao para criar uma nova struct e atribuir ela para
{										// a struct anterior
	t_lista *novo;
	novo = (t_lista*) malloc(sizeof(t_lista));
	novo->info = i;
	novo->prox = l;
	return (novo);
}

void	imprime(t_lista *l)		// funçao para imprimir valores
{
	t_lista	*p;

	p = l;
	while (p != NULL)
	{
		printf("info = %ld\n", p->info);
		p = p->prox;
	}
}

int main()			// teste com "parametros" passados diretamente no codigo
{
	t_lista	*l;

	l = inicializada();
	l = insere(l, 23);
	l = insere(l, 25);
	l = insere(l, 27);
	imprime(l);
	return (0);
}

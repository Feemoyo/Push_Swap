/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:20:27 by fmoreira          #+#    #+#             */
/*   Updated: 2022/05/04 19:45:04 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "test.h"

typedef struct s_lista
{
	size_t info;
	struct s_lista *prox;
}	t_lista;

t_lista	*inicializada(void)
{
	return (NULL);
}

t_lista	*insere(t_lista l, size_t i)
{
	t_lista *novo;
	novo = (t_lista*) malloc(sizeof(t_lista));
	novo->info = i;
	novo->prox = &l;
	return (novo);
}

void	imprime(t_lista l)
{
	t_lista	*p;

	p = &l;
	while (p != NULL)
	{
		printf("info = %ld\n", p->info);
		p = p->prox;
	}
}

int main()
{
	t_lista	l;

	l = inicializada();
	l = insere(l, 23);
	l = insere(l, 25);
	l = insere(l, 27);
	imprime(l);
	return (0);
}

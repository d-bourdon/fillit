/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:49:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/19 11:13:27 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	form51(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k] = "####";
	bigtab[j][k + 1] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 1] = "\0\0\0\0";
	bigtab[j][k + 2] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 2] = "\0\0\0\0";
	bigtab[j][k + 3] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 3] = "\0\0\0\0";
}

void	form52(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k] = "#\0\0\0";
	bigtab[j][k + 1] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 1] = "#\0\0\0";
	bigtab[j][k + 2] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 2] = "#\0\0\0";
	bigtab[j][k + 3] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 3] = "#\0\0\0";
}

void	form5(char ***bigtab, int j, int nb)
{
	if (nb == 51)
		form51(bigtab, j);
	if (nb == 52)
		form52(bigtab, j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:49:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/06 12:32:43 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	form11(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("#...", '#', j);
	bigtab[j][k + 1] = dlf("#...", '#', j);
	bigtab[j][k + 2] = dlf("##..", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form12(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("..#.", '#', j);
	bigtab[j][k + 1] = dlf("###.", '#', j);
	bigtab[j][k + 2] = dlf("....", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form13(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("##..", '#', j);
	bigtab[j][k + 1] = dlf(".#..", '#', j);
	bigtab[j][k + 2] = dlf(".#..", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form14(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("###.", '#', j);
	bigtab[j][k + 1] = dlf("#...", '#', j);
	bigtab[j][k + 2] = dlf("....", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form1(char ***bigtab, int j, int nb)
{
	if (nb == 11)
		form11(bigtab, j);
	if (nb == 12)
		form12(bigtab, j);
	if (nb == 13)
		form13(bigtab, j);
	if (nb == 14)
		form14(bigtab, j);
}

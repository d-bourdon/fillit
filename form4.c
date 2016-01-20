/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:49:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/20 13:41:59 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	form41(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf(".#..", '#', j);
	bigtab[j][k + 1] = dlf("###.", '#', j);
	bigtab[j][k + 2] = dlf("....", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form42(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf(".#..", '#', j);
	bigtab[j][k + 1] = dlf("##..", '#', j);
	bigtab[j][k + 2] = dlf(".#..", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form43(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("###.", '#', j);
	bigtab[j][k + 1] = dlf(".#..", '#', j);
	bigtab[j][k + 2] = dlf("....", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form44(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("#...", '#', j);
	bigtab[j][k + 1] = dlf("##..", '#', j);
	bigtab[j][k + 2] = dlf("#...", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form4(char ***bigtab, int j, int nb)
{
	if (nb == 41)
		form41(bigtab, j);
	if (nb == 42)
		form42(bigtab, j);
	if (nb == 43)
		form43(bigtab, j);
	if (nb == 44)
		form44(bigtab, j);
}

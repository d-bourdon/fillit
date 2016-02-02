/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:49:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/02 15:29:44 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	form71(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf(".##.", '#', j);
	bigtab[j][k + 1] = dlf("##..", '#', j);
	bigtab[j][k + 2] = dlf("....", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form72(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = dlf("#...", '#', j);
	bigtab[j][k + 1] = dlf("##..", '#', j);
	bigtab[j][k + 2] = dlf(".#..", '#', j);
	bigtab[j][k + 3] = dlf("....", '#', j);
}

void	form7(char ***bigtab, int j, int nb)
{
	if (nb == 71)
		form71(bigtab, j);
	if (nb == 72)
		form72(bigtab, j);
}

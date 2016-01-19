/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:49:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/19 11:19:48 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	form61(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k] = "##\0\0";
	bigtab[j][k + 1] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 1] = "\0##\0";
	bigtab[j][k + 2] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 2] = "\0\0\0\0";
	bigtab[j][k + 3] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 3] = "\0\0\0\0";
}

void	form62(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k] = "\0#\0\0";
	bigtab[j][k + 1] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 1] = "##\0\0";
	bigtab[j][k + 2] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 2] = "#\0\0\0";
	bigtab[j][k + 3] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 3] = "\0\0\0\0";
}

void	form6(char ***bigtab, int j, int nb)
{
	if (nb == 61)
		form61(bigtab, j);
	if (nb == 62)
		form62(bigtab, j);
}

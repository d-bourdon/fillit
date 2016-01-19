/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:49:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/19 11:01:09 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	form11(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k] = "#\0\0\0";
	bigtab[j][k + 1] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 1] = "#\0\0\0";
	bigtab[j][k + 2] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 2] = "##\0\0";
	bigtab[j][k + 3] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 3] = "\0\0\0\0";
}

void	form12(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k] = "\0\0#\0";
	bigtab[j][k + 1] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 1] = "###\0";
	bigtab[j][k + 2] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 2] = "\0\0\0\0";
	bigtab[j][k + 3] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 3] = "\0\0\0\0";
}

void	form13(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k] = "##\0\0";
	bigtab[j][k + 1] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 1] = "\0#\0\0";
	bigtab[j][k + 2] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 2] = "\0#\0\0";
	bigtab[j][k + 3] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 3] = "\0\0\0\0";
}

void	form14(char ***bigtab, int j)
{
	int		k;

	k = 0;
	bigtab[j] = (char**)malloc(sizeof(char*) * 4);
	bigtab[j][k] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k] = "###\0";
	bigtab[j][k + 1] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 1] = "#\0\0\0";
	bigtab[j][k + 2] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 2] = "\0\0\0\0";
	bigtab[j][k + 3] = (char*)malloc(sizeof(char) * 4);
	bigtab[j][k + 3] = "\0\0\0\0";
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

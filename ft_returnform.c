/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_returnform.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 15:15:19 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/02 15:34:46 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*dlf(const char *motif, char l, int piece)
{
	char	*out;
	int		i;

	out = (char*)malloc(sizeof(char) * 5);
	out = ft_strcpy(out, motif);
	i = 0;
	while (i < 4)
	{
		if (out[i] == l)
			out[i] = 'A' + piece;
		i++;
	}
	return (out);
}

char	***returnform(int *tab)
{
	char	***bigtab;
	int		i;
	int		j;

	bigtab = (char ***)malloc(sizeof(char **) * 26);
	i = -1;
	j = 0;
	while (tab[++i] != 0)
	{
		if (tab[i] > 10 && tab[i] < 15)
			form1(bigtab, j++, tab[i]);
		else if (tab[i] > 20 && tab[i] < 25)
			form2(bigtab, j++, tab[i]);
		else if (tab[i] > 30 && tab[i] < 32)
			form3(bigtab, j++, tab[i]);
		else if (tab[i] > 40 && tab[i] < 45)
			form4(bigtab, j++, tab[i]);
		else if (tab[i] > 50 && tab[i] < 53)
			form5(bigtab, j++, tab[i]);
		else if (tab[i] > 60 && tab[i] < 63)
			form6(bigtab, j++, tab[i]);
		else if (tab[i] > 70 && tab[i] < 73)
			form7(bigtab, j++, tab[i]);
	}
	return (bigtab);
}

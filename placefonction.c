/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placefonction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 14:46:06 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/28 18:56:25 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		placepossible(char **map, char **piece, int y, int x)
{
	int		k;
	int		l;
	int		save;

	k = 0;
	l = 0;
	save = y;
	while (l < 4 && k < 4)
	{
		while (k < 4)
		{
			if (!(map[x]) && ft_strcmp(piece[l], "....") == 0)
				return (1);
			else if (!(map[x]) && ft_strcmp(piece[l], "....") != 0)
				return (0);
			if (map[x][y] == '.' || piece[l][k] == '.')
				k++;
			else
			{
				return (0);
			}
			y++;
		}
		k = 0;
		l++;
		x++;
		y = save;
	}
	return (1);
}

int		movemap(char ***map, char ***bigtab, int piecen)
{
	int		*xy;
	int		size;

	size = 0;
	xy = (int*)malloc(sizeof(int) * 2);
	xy[0] = 0;
	xy[1] = 0;
	if (bigtab[piecen] == NULL)
	{
		printf("HELLO\n");
		return (1);
	}
	ft_affichagemap(*map);
	size = ft_strlen(*map[0]);
	while (xy[0] < size)
	{
		while (xy[1] < size)
		{
			if (placepossible(*map, bigtab[piecen], xy[1], xy[0]) == 1)
			{
				printf("yes possible\n");
				*map = placemap(*map, bigtab[piecen], xy);
				ft_affichagemap(*map);
				if(movemap(map, bigtab, piecen + 1) == 1)
				{
					printf("I'am BACK !\n");
					ft_affichagemap(*map);
					return (1);
				}
				else
				{
					printf("FUCKKKKKKKKKK");
					retraitpiece(*map, piecen);
				}
			}
			printf("NOP\n");
			xy[1]++;
		}
		xy[1] = 0;
		xy[0]++;
	}
	if (piecen == 0)
	{
		printf("On remap\n");
		*map = remap(*map);
		movemap(map, bigtab, piecen);
	}
	return (0);
}

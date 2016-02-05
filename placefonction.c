/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placefonction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 14:46:06 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/04 15:54:22 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		placepossible(char **map, char **piece, int y, int x)
{
	int		*kl;
	int		save;

	kl = ft_memalloc(2);
	save = y;
	while (kl[1] < 4 && kl[0] < 4)
	{
		while (kl[0] < 4)
		{
			if (!(map[x]) && ft_strcmp(piece[kl[1]], "....") == 0)
				return (1);
			else if (!(map[x]) && ft_strcmp(piece[kl[1]], "....") != 0)
				return (0);
			if (map[x][y] == '.' || piece[kl[1]][kl[0]] == '.')
				kl[0]++;
			else
				return (0);
			y++;
		}
		kl[0] = 0;
		kl[1]++;
		x++;
		y = save;
	}
	return (1);
}

int		movemap(char ***map, char ***bigtab, int piecen, int *xy)
{
	if (bigtab[piecen] == NULL || piecen > 25)
		return (1);
	while (xy[0] < (int)ft_strlen(*map[0]))
	{
		while (xy[1] < (int)ft_strlen(*map[0]))
		{
			if (placepossible(*map, bigtab[piecen], xy[1], xy[0]) == 1)
			{
				*map = placemap(*map, bigtab[piecen], xy);
				if (movemap(map, bigtab, piecen + 1, ft_memalloc(2)) == 1)
					return (1);
				else
					retraitpiece(*map, piecen);
			}
			xy[1]++;
		}
		xy[1] = 0;
		xy[0]++;
	}
	if (piecen == 0)
	{
		*map = remap(*map);
		movemap(map, bigtab, piecen, ft_memalloc(2));
	}
	return (0);
}

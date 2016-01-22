/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placefonction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 14:46:06 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/22 14:25:51 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		placepossible(char **map, char **piece, int y, int x)
{
	int		k;
	int		l;

	k = 0;
	l = 0;
	while (l < 4 && k < 4)
	{
		while (k < 4)
		{
			if (map[x][y] == '.' || piece[l][k] == '.')
				k++;
			else
				return (0);
			y++;
		}
		k = 0;
		l++;
		x++;
		y = y - 4;
	}
	return (1);
}

int *movemap(char **map, char **piece)
{
	int		*xy;
	int		size;

	xy = (int*)malloc(sizeof(int)*2);
	xy[0] = 0;
	xy[1] = 0;
	size = ft_strlen(map[0]);
	while (x < size)
	{
		while(y < size)
		{
			if(placepossible(map, piece, xy[1], xy[0]) == 1)
				return (xy);
			y++;
		}
		y = 0;
		x++;
	}
	xy[0] = -1;
	return (xy);
}

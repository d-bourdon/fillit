/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placefonction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 14:46:06 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/26 19:05:51 by dbourdon         ###   ########.fr       */
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

int		*movemap(char **map, char **piece)
{
	int		*xy;
	int		size;

	xy = (int*)malloc(sizeof(int) * 2);
	xy[0] = 0;
	xy[1] = 0;
	size = ft_strlen(map[0]);
	while (xy[0] < size)
	{
		printf("XY[0] %d\n", xy[0]); fflush(stdout);
		while (xy[1] < size)
		{
			printf("XY[1] %d\n", xy[1]); fflush(stdout);
			if (placepossible(map, piece, xy[1], xy[0]) == 1)
				return (xy);
			xy[1]++;
		}
		xy[1] = 0;
		xy[0]++;
	}
	xy[0] = -1;
	return (xy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placefonction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 14:46:06 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/21 14:27:43 by paim             ###   ########.fr       */
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

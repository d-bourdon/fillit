/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placemap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:40:18 by paim              #+#    #+#             */
/*   Updated: 2016/01/27 11:32:08 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**placemap(char **map, char **piece, int *xy)
{
	int	x;
	int	y;
	int	i;
	int	j;

	i = 0;
	j = 0;
	x = xy[0];
	y = xy[1];
	while (piece[i][y] <= 90 && piece[i][j] >= 65)
	{
		map[x][y] = piece[i][j];
		i++;
		x++;
		if (piece[i][j] >= 90 || piece[i][j] <= 65)
		{
			j++;
			y++;
		}
	}
	return (map);
}

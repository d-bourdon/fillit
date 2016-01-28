/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placemap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 15:40:18 by paim              #+#    #+#             */
/*   Updated: 2016/01/28 18:53:45 by dbourdon         ###   ########.fr       */
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
	while (i < 4)
	{
		while (piece[i][j] != '\n' && j < 4)
		{
			if (piece[i][j] != '.')
				map[x + i][y + j] = piece[i][j];
			j++;
		}
		i++;
		j = 0;
	}
	return (map);
}

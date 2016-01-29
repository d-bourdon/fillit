/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retraitpieces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 10:42:42 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/29 12:03:23 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	retraitpiece(char **map, int npiece)
{
	int		size;
	int		i;
	int		j;

	size = 0;
	i = 0;
	j = 0;
	size = ft_strlen(map[0]);
	while (i < size)
	{
		while (j < size)
		{
			if (map[i][j] == (65 + npiece))
				map[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
}

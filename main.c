/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:52:01 by paim              #+#    #+#             */
/*   Updated: 2016/01/22 18:21:11 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	***bigtab;
	char	**map;
	int		ind;
	int		nbpiece;
	int		*xy;

	xy = (int*)malloc(sizeof(int)*2);
	xy[0] = 0;
	xy[1] = 0;
	ind = 0;
	openingfil(argc, argv);
	bigtab = returnform(checkfile(argv, 0, t));
	map = creamap(carmini(countform(argv, 0)));
	nbpiece = countform(argv, 0);
	while (ind < nbpiece)
	{
		xy = movemap(map, bigtab[ind]);
		if (xy[0] >= 0)
		{
			map = placemap(map, bigtab[ind], xy);
			ind++;
		}
		else
		{
			map = remap(map);
			ind = 0;
		}
	}
	return (0);
}

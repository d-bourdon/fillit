/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:52:01 by paim              #+#    #+#             */
/*   Updated: 2016/01/22 19:12:32 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	***bigtab;
	char	**map;
	int		ind;
	int		*xy;
	tscheckf	*t;

	xy = (int*)malloc(sizeof(int)*2);
	xy[0] = 0;
	xy[1] = 0;
	ind = 0;
	openingfile(argc, argv);
	bigtab = returnform(check_file(argv, 0, t));
	map = creamap(carmini(countform(argv, 0)));
	t->nbpiece = countform(argv, 0);
	while (ind < t->nbpiece)
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

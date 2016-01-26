/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:52:01 by paim              #+#    #+#             */
/*   Updated: 2016/01/25 17:24:37 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

tscheckf	*init_struct(void)
{
	tscheckf 	*t;

	t = (tscheckf *)malloc(sizeof(tscheckf));
	t->tab = NULL;
	t->ret = 0;
	t->buf = NULL;
	t->nbpiece = 0;
	return (t);
}

int		main(int argc, char **argv)
{
	char	***bigtab;
	char	**map;
	int		ind;
	int		*xy;
	tscheckf *t;
	int	p, i;
	p = 0;
	i = 0;
	xy = (int*)malloc(sizeof(int)*2);
	xy[0] = 0;
	xy[1] = 0;
	ind = 0;
	t = init_struct();
	openingfile(argc, argv, t);
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
		while (map[p][i] != '\0')
		{
			printf("%c", map[p][i]);
			i++;
			if (map[p][i] == '\0')
			{
				p++;
				i = 0;
			}
		}
	}
	return (0);
}

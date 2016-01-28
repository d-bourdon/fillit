/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:52:01 by paim              #+#    #+#             */
/*   Updated: 2016/01/28 18:56:28 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

tscheckf	*init_struct(void)
{
	tscheckf 	*t;

	t = (tscheckf *)malloc(sizeof(tscheckf));
	t->tab = NULL; //tableau d'int des pieces
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
	xy = (int*)malloc(sizeof(int)*2);
	xy[0] = 0;
	xy[1] = 0;
	ind = 0;
	t = init_struct();
	openingfile(argc, argv, t);
	bigtab = returnform(check_file(argv, 0, t));
	map = creamap(carmini(countform(argv, 0)));
	t->nbpiece = countform(argv, 0);
	printf("Nombre de pieces%d\n", t->nbpiece);
//	while (ind < t->nbpiece)
//	{
//		printf("1er ligne map : %s\n", map[0]);fflush(stdout);
//		xy = movemap(map, bigtab[ind]);
//		if (xy[0] > -1)
//		{
/*			map = placemap(map, bigtab[ind], xy);
			ind++;
		}
		else
		{
			map = remap(map);
			ind = 0;
		//	return (0); //evite boucle infini
		}
		ft_putstr("passe");
	}*/
	if(movemap(&map, bigtab, 0))
		ft_affichagemap(map);
	else
		ft_affichagemap(map);
}

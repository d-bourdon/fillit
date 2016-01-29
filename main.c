/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:52:01 by paim              #+#    #+#             */
/*   Updated: 2016/01/29 16:55:39 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_scheckf		*init_struct(void)
{
	t_scheckf	*t;

	t = (t_scheckf *)malloc(sizeof(t_scheckf));
	t->tab = NULL;
	t->ret = 0;
	t->buf = NULL;
	t->nbpiece = 0;
	return (t);
}

int			main(int argc, char **argv)
{
	char	***bigtab;
	char	**map;
	int		ind;
	int		*xy;
	t_scheckf*t;

	xy = (int*)malloc(sizeof(int) * 2);
	xy[0] = 0;
	xy[1] = 0;
	ind = 0;
	t = init_struct();
	openingfile(argc, argv, t);
	if (countform(argv, 0) > 26)
		error();
	bigtab = returnform(check_file(argv, 0, t));
	map = creamap(carmini(countform(argv, 0)));
	t->nbpiece = countform(argv, 0);
	if (movemap(&map, bigtab, 0))
		ft_affichagemap(map);
	else
		ft_affichagemap(map);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:52:01 by paim              #+#    #+#             */
/*   Updated: 2016/01/26 19:05:48 by dbourdon         ###   ########.fr       */
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
	openingfile(argc, argv, t);ft_putstr("coucou");
	bigtab = returnform(check_file(argv, 0, t));ft_putstr("on avance");
	map = creamap(carmini(countform(argv, 0)));ft_putstr("ok");
	t->nbpiece = countform(argv, 0);ft_putstr("avant la boucle while");
	printf("%d\n", t->nbpiece);
	while (ind < t->nbpiece)
	{ft_putstr("i'm in");
		xy = movemap(map, bigtab[ind]);
		if (xy[0] > -1)
		{
			map = placemap(map, bigtab[ind], xy);
			ind++;
		}
		else
		{
			printf("HELLO  %d", xy[0]);
			map = remap(map);
			ind = 0;
			return(0);
		}
		ft_putstr("passe");
	}
		ft_putstr("apres la boucle");
	return (0);
}

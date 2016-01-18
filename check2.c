/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 12:28:15 by paim              #+#    #+#             */
/*   Updated: 2016/01/18 13:19:17 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_coord_tetra6(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' &&
				str[i + 9] == '#')
			return (1);
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#')
			return (1);
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' &&
				str[i + 11] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		check_tetra(char *str)
{
	if (!check_coord_tetra(str) && !check_coord_tetra2(str)
			&& !check_coord_tetra3(str) && !check_coord_tetra4(str)
			&& !check_coord_tetra5(str) && !check_coord_tetra6(str))
	{
		ft_putstr("error\n");
		return (0);
	}
	else
		return (1);
}

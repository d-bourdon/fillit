/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 12:28:15 by paim              #+#    #+#             */
/*   Updated: 2016/01/27 14:53:48 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_coord_tetra6(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' &&
				str[i + 9] == '#')
			return (62);
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#')
			return (71);
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' &&
				str[i + 11] == '#')
			return (72);
		i++;
	}
	return (0);
}

int			check_tetra(char *str)
{
	int		i;

	i = 0;
	i = check_coord_tetra(str);
	if (i != 0)
		return (i);
	i = check_coord_tetra2(str);
	if (i != 0)
		return (i);
	i = check_coord_tetra3(str);
	if (i != 0)
		return (i);
	i = check_coord_tetra4(str);
	if (i != 0)
		return (i);
	i = check_coord_tetra5(str);
	if (i != 0)
		return (i);
	i = check_coord_tetra6(str);
	if (i != 0)
		return (i);
	error("checktetra Detection du tetraminos");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 12:18:08 by paim              #+#    #+#             */
/*   Updated: 2016/01/18 12:29:14 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

static int	check_coord_tetra(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 10] == '#' &&
				str[i + 11] == '#')
			return (1);
		if (str[i] == '#' && str[i + 3] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#')
			return (1);
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 6] == '#' &&
				str[i + 11] == '#')
			return (1);
		i++;
	}
	return (0);
}

static int	check_coord_tetra2(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' &&
				str[i + 7] == '#')
			return (1);
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 5] == '#' &&
				str[i + 10] == '#')
			return (1);
		if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' &&
				str[i + 10] == '#')
			return (1);
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' &&
				str[i + 6] == '#')
			return (1);
		i++;
	}
	return (0);
}

static int		check_coord_tetra3(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' &&
				str[i + 7] == '#')
			return (1);
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 5] == '#' &&
				str[i + 6] == '#')
			return (1);
		if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' &&
				str[i + 6] == '#')
			return (1);
		i++;
	}
	return (0);
}

static int		check_coord_tetra4(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' &&
				str[i + 5] == '#')
			return (1);
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 9] == '#' &&
				str[i + 10] == '#')
			return (1);
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' &&
				str[i + 10] == '#')
			return (1);
		i++;
	}
	return (0);
}

static int		check_coord_tetra5(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' &&
				str[i + 3] == '#')
			return (1);
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 10] == '#' &&
				str[i + 15] == '#')
			return (1);
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 6] == '#' &&
				str[i + 7] == '#')
			return (1);
		i++;
	}
	return (0);
}

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

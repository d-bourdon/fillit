/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carmini.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:41:14 by paim              #+#    #+#             */
/*   Updated: 2016/02/03 12:26:31 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		carmini(int i)
{
	if (i == 1)
		return (2);
	if (i == 2)
		return (3);
	if (i == 3 || i == 4)
		return (4);
	if (i == 5 || i == 6)
		return (5);
	if (i >= 7 && i <= 9)
		return (6);
	if (i >= 10 && i <= 12)
		return (7);
	if (i >= 13 && i <= 16)
		return (8);
	if (i >= 17 && i <= 20)
		return (9);
	if (i >= 21 && i <= 25)
		return (10);
	if (i == 26)
		return (11);
	else
		return (0);
}

char	**init_map(char **map, int size)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
	{
		ft_bzero(map[i], size);
		i++;
	}
	return (map);
}

char	**creamap(int size)
{
	char	**map;
	int		j;

	j = 0;
	if (!(map = (char**)malloc(sizeof(char*) * size + 1)))
	{
		error();
		return (0);
	}
	while (size != j)
	{
		if (!(map[j] = (char*)malloc(sizeof(char) * size)))
		{
			error();
			return (0);
		}
		j++;
	}
	map = init_map(map, size);
	return (map);
}

char	**remap(char **oldmap)
{
	char	**newmap;
	int		sizeadd;

	sizeadd = ft_strlen(oldmap[0]) + 1;
	newmap = creamap(sizeadd);
	return (newmap);
}

int		countform(char **argv, int j)
{
	int		fd;
	int		ret;
	char	*buf;

	fd = open(argv[1], O_RDONLY);
	buf = (char *)malloc(sizeof(char) * 21);
	while ((ret = read(fd, buf, 21)) > 0)
	{
		buf[ret] = '\0';
		j++;
	}
	return (j);
}

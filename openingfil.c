/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openingfil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:24:11 by paim              #+#    #+#             */
/*   Updated: 2016/01/18 18:38:00 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_char(char *str)
{
	int	i;
	int	j;
	int	k;
	int	l;

	l = 0;
	k = 0;
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			j++;
		if (str[i] == '.')
			k++;
		if (str[i] == '\n')
			l++;
		i++;
	}
	if (j != 4 || k != 12 || l != 4)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}

int			check_tetraminos(char *str)
{
	int	i;

	i = 0;
	i = check_char(str);
	if (i == 1)
	{
		i = 0;
		if (str[4] != '\n' || str[9] != '\n' || str[14] != '\n' ||
				str[19] != '\n')
		{
			ft_putstr("error\n");
			return (0);
		}
		i = 0;
		i = check_tetra(str);
		if (i == 0)
		{
			ft_putstr("error\n");
			return (-1);
		}
	}
	return (i);
}

void		openingfile(int argc, char **argv)
{
	int	fd;

	if (argc != 2 || (fd = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("error\n");
		return ;
	}
	check_file(argv);
	close(fd);
}

int			*check_file(char **argv)
{
	int		tab[27];
	int		fd;
	int		ret;
	char	*buf;
	char	bn[1];
	int	i;

	i = 0;
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (NULL);
	if ((buf = (char *)malloc(sizeof(char) * 21)) == NULL)
		return (NULL);
	while ((ret = read(fd, buf, 20)) != -1 && check_tetraminos(buf))
	{
		tab[i] = check_tetraminos(buf);
		i++;
		buf[ret] = '\0';
		if (read(fd, &bn[0], 1) == -1)
		{
			ft_putstr("error\n");
			return (NULL);
		}
		if (bn[0] != '\n')
		{
			ft_putstr("error\n");
			return (NULL);
		}
	}
	close(fd);
	return (tab);
}

int			main(int argc, char **argv)
{
	openingfile(argc, argv);
	return (0);
}

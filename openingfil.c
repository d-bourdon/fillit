/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openingfil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:24:11 by paim              #+#    #+#             */
/*   Updated: 2016/01/18 12:28:29 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>


int		check_tetraminos(char *str)
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
	if (l != 4 || k != 12 || j != 4)
	{
		ft_putstr("error\n");
		return (0);
	}
	if (str[i] % 5 != '\n')
	{
		ft_putstr("error\n");
		return (0);
	}
	i = 0;
	i = check_tetra(str);
	if (i == 1)
		return (0);
	else
	{
		ft_putstr("error\n");
		return (-1);
	}
}

void	openingfile(int argc, char **argv)
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

int		check_file(char **argv)
{
	int		fd;
	int		ret;
	char	*buf;
	char	bn[1];

	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (-1);
	if ((buf = (char *)malloc(sizeof(char) * 21)) == NULL)
		return (-1);
	while ((ret = read(fd, buf, 20)) != -1 && check_tetraminos(buf))
	{
		buf[ret] = '\0';
		if (read(fd, &bn[0], 1) == -1)
		{
			ft_putstr("error\n");
			return (-1);
		}
		if (bn[0] != '\n')
		{
			ft_putstr("error\n");
			return (-1);
		}
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	openingfile(argc, argv);
	return (0);
}

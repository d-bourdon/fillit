/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openingfil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:24:11 by paim              #+#    #+#             */
/*   Updated: 2016/01/18 11:10:51 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <unistd.h>

void	ft_putstr(char const *s);
void	ft_putnbr(int	c);
void	openingfile(int argc, char **argv);
int		check_file(char **argv);

static int		check_coord_tetra(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == '#' && str[i + 5] == '#' && str[i + 10] == '#' && 
				str[i + 11] == '#')
			return (1);
		if(str[i] == '#' && str[i + 3] == '#' && str[i + 4] == '#' && 
				str[i + 5] == '#')
			return (1);
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 6] == '#' && 
				str[i + 11] == '#')
			return (1);
		i++;
	}
	return(0);
}


static int		check_coord_tetra2(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' &&
				str[i + 7] == '#')
			return (1);
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 5] == '#' &&
				str[i + 10] == '#')
			return (1);
		if(str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && 
				str[i + 10] == '#')
			return (1);
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && 
				str[i + 6] == '#')
			return (1);
		i++;
	}
	return(0);
}

static int		check_coord_tetra3(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && 
				str[i + 7] == '#')
			return (1);
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 5] == '#' && 
				str[i + 6] == '#')
			return (1);
		if(str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && 
				str[i + 6] == '#')
			return (1);
		i++;
	}
	return(0);
}

static int		check_coord_tetra4(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && 
				str[i + 5] == '#')
			return (1);
		if(str[i] == '#' && str[i + 5] == '#' && str[i + 9] == '#' && 
				str[i + 10] == '#')
			return (1);
		if(str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && 
				str[i + 10] == '#')
			return (1);
		i++;
	}
	return(0);
}

static int		check_coord_tetra5(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && 
				str[i + 3] == '#')
			return(1);
		if(str[i] == '#' && str[i + 5] == '#' && str[i + 10] == '#' && 
				str[i + 15] == '#')
			return(1);
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 6] == '#' && 
				str[i + 7] == '#')
			return(1);
		i++;
	}
	return (0);
}

static int		check_coord_tetra6(char *str)
{	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && 
				str[i + 9] == '#')
			return (1);
		if(str[i] == '#' && str[i + 1] == '#' && str[i + 4] == '#' && 
				str[i + 5] == '#')
			return (1);
		if(str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && 
				str[i + 11] == '#')
			return (1);
		i++;
	}
	return(0);
}

int		check_tetra(char *str)
{
	if (!check_coord_tetra(str) && !check_coord_tetra2(str) 
			&& !check_coord_tetra3(str) && !check_coord_tetra4(str) 
			&& !check_coord_tetra5(str) && check_coord_tetra6(str))
		return (0);
	else
		return (1);
}

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
	while(str[i] != '\0')
	{
		if(str[i] == '#')
			j++;
		if(str[i] == '.')
			k++;
		if(str[i] == '\n')
			l++;
		i++;
	}
	if(l != 4)
	{
		return (0);
	}
	if(k != 12)
	{
		return (0);
	}
	if (j != 4)
	{
		return (0);
	}
	if (str[i] % 5 != '\n')
	{
			return(0);
	}
	i = 0;
	i = check_tetra(str);
	if (i == 1)
		return (0);
	else
	{
		return (0);
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
			return (-1);
		if (bn[0] != '\n')
			return (-1);
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	openingfile(argc, argv);
	return (0);
}

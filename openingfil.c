/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openingfil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:24:11 by paim              #+#    #+#             */
/*   Updated: 2016/01/29 14:59:58 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


static int	check_char(char *str, int i)
{
	int	j;
	int	k;
	int	l;

	l = 0;
	k = 0;
	j = 0;
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
	if (j != 4 || k != 12 || l != 5)
	{
		error();
		return (0);
	}
	return (1);
}

static int	check_tetraminosfirt(char *str)
{
	int	i;

	i = 0;
	i = checkcharfirt(str, 0);
	if (i == 1)
	{
		i = 0;
		if (str[0] == '\n' || str[4] != '\n' || str[9] != '\n' 
				|| str[14] != '\n' ||str[19] != '\n')
		{
			error();
			return (0);
		}
		i = 0;
		i = check_tetra(str);
		if (i == 0)
		{
			error();
			return (-1);
		}
	}
	return (i);
}

int			check_tetraminos(char *str)
{
	int	i;

	i = 0;
	i = check_char(str, 0);
	if (i == 1)
	{
		i = 0;
		if (str[0] != '\n' || str[5] != '\n' || str[10] != '\n' 
				|| str[15] != '\n' || str[20] != '\n')
		{
			error();
			return (0);
		}
		i = 0;
		i = check_tetra(str);
		if (i == 0)
		{
			error();
			return (-1);
		}
	}
	return (i);
}

void		openingfile(int argc, char **argv, t_scheckf *t)
{
	int			filed;
	int			i;
	int			j;

	i = 0;
	j = 0;
	filed = 0;
	if (argc != 2 || (filed = open(argv[1], O_RDONLY)) == -1)
		error();
	t->tab = check_file(argv, i, t);
	close(filed);
}

int			*check_file(char **argv, int i, t_scheckf *t)
{
	if ((t->fd = open(argv[1], O_RDONLY)) == -1)
		return (NULL);
	if ((t->buf = (char *)malloc(sizeof(char) * 21)) == NULL)
		return (NULL);
	t->tab = ft_memalloc(108);
	t->ret = read(t->fd, t->buf, 20);
	t->buf[t->ret] = '\0';
	t->tab[i] = check_tetraminosfirt(t->buf);
	if (t->tab[i] == -1)
		error();
	i++;
	while ((t->ret = read(t->fd, t->buf, 21)) > 0)
	{
		t->buf[t->ret] = '\0';
		t->tab[i] = check_tetraminos(t->buf);
		if (t->tab[i] == -1)
			error();
		i++;
	}
	close(t->fd);
	return (t->tab);
}

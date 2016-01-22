/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openingfil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 13:24:11 by paim              #+#    #+#             */
/*   Updated: 2016/01/22 19:12:52 by dbourdon         ###   ########.fr       */
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
	tscheckf	*t;
	int			filed;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (argc != 2 || (filed = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("error\n");
		return ;
	}
	if ((t = (tscheckf *)malloc(sizeof(tscheckf))))
	{
		ft_putstr("error\n");
		return ;
	}
	check_file(argv, i, t);
	close(filed);
}

int			*check_file(char **argv, int i,tscheckf *t)
{
	if ((t->fd = open(argv[1], O_RDONLY)) == -1)
		return (NULL);
	if ((t->buf = (char *)malloc(sizeof(char) * 21)) == NULL)
		return (NULL);
	t->tab = ft_memalloc(108);
	while ((t->ret = read(t->fd, t->buf, 20)) != -1 && check_tetraminos(t->buf))
	{
		t->tab[i] = check_tetraminos(t->buf);
		i++;
		t->buf[t->ret] = '\0';
		if (read(t->fd, &t->bn[0], 1) == -1)
		{
			ft_putstr("error\n");
			return (NULL);
		}
		if (t->bn[0] != (char*)'\n')
		{
			ft_putstr("error\n");
			return (NULL);
		}
	}
	close(t->fd);
	return (t->tab);
}

int			main(int argc, char **argv)
{
	openingfile(argc, argv);
	return (0);
}

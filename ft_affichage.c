/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affichage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 14:40:01 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/29 16:55:57 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_affichagemap(char **map)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	j = ft_strlen(map[0]);
	while (i < j)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}

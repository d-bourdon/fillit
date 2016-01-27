/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affichage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 14:40:01 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/27 16:55:33 by dbourdon         ###   ########.fr       */
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
	ft_putchar('\n');
	while(i < j)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}

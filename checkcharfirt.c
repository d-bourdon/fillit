/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcharfirt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 14:40:21 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/29 17:21:03 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


int	checkcharfirt(char *str, int i)
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
	if (j != 4 || k != 12 || l != 4)
	{
		error();
		return (0);
	}
	return (1);
}

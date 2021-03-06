/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:28:58 by paim              #+#    #+#             */
/*   Updated: 2016/01/27 15:57:59 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int		i;
	char	*ss;
	int		c;

	ss = (char *)s;
	c = (int)n;
	i = 0;
	while (i < c)
	{
		ss[i] = '.';
		i++;
	}
	return (s);
}

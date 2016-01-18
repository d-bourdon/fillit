/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 11:54:54 by paim              #+#    #+#             */
/*   Updated: 2016/01/18 13:32:42 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <unistd.h>
# include "laslibft/libft.h"

void	openingfile(int argc, char **argv);
int		check_file(char **argv);
int		check_tetra(char *str);
int		check_coord_tetra(char *str);
int		check_coord_tetra2(char *str);
int		check_coord_tetra3(char *str);
int		check_coord_tetra4(char *str);
int		check_coord_tetra5(char *str);

#endif

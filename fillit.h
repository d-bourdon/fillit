/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 11:54:54 by paim              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/01/20 17:26:36 by dbourdon         ###   ########.fr       */
=======
/*   Updated: 2016/01/20 12:23:48 by paim             ###   ########.fr       */
>>>>>>> 30e09b674c6003c7280537b676a30a8b6cf575ab
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
# include "libft/libft.h"
# include <stdio.h> /// Warning Printf ///

void	openingfile(int argc, char **argv);
int		*check_file(char **argv);
int		check_tetra(char *str);
int		check_coord_tetra(char *str);
int		check_coord_tetra2(char *str);
int		check_coord_tetra3(char *str);
int		check_coord_tetra4(char *str);
int		check_coord_tetra5(char *str);

char	***returnform(int *tab);
int		placepossible(cgar **map, char **piece, int y, int x);
char	*dlf(const char *motif, char l, int piece);
void	form1(char ***bigtab, int j, int nb);
void	form11(char ***bigtab, int j);
void	form12(char ***bigtab, int j);
void	form13(char ***bigtab, int j);
void	form14(char ***bigtab, int j);
void	form2(char ***bigtab, int j, int nb);
void	form21(char ***bigtab, int j);
void	form22(char ***bigtab, int j);
void	form23(char ***bigtab, int j);
void	form24(char ***bigtab, int j);
void	form3(char ***bigtab, int j, int nb);
void	form31(char ***bigtab, int j);
void	form4(char ***bigtab, int j, int nb);
void	form41(char ***bigtab, int j);
void	form42(char ***bigtab, int j);
void	form43(char ***bigtab, int j);
void	form44(char ***bigtab, int j);
void	form5(char ***bigtab, int j, int nb);
void	form51(char ***bigtab, int j);
void	form52(char ***bigtab, int j);
void	form6(char ***bigtab, int j, int nb);
void	form61(char ***bigtab, int j);
void	form62(char ***bigtab, int j);
void	form7(char ***bigtab, int j, int nb);
void	form71(char ***bigtab, int j);
void	form72(char ***bigtab, int j);

#endif

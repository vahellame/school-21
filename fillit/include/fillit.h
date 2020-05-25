/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:31:31 by enine             #+#    #+#             */
/*   Updated: 2019/10/22 20:39:40 by enine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

typedef struct					s_etri
{
	int							x[4];
	int							y[4];
	char						letter;
	struct s_etri				*next;
}								t_etri;

int								g_size;
t_etri							*g_first_figure;

int								square_side(int count);
char							**new_map(void);
int								free_map(char ***map);
int								fillit(t_etri *figures, int count);
int								ft_clear(char **matrix, char letter);
int								print_map(char **map);
int								ft_decode(t_etri *f, char **m, int i, int j);
void							ft_square(t_etri *create, int j);
void							ft_duck1(t_etri *create, int j);
void							ft_duck2(t_etri *create, int j);
void							ft_duck3(t_etri *create, int j);
void							ft_duck4(t_etri *create, int j);
void							ft_ugol1(t_etri *create, int j);
void							ft_ugol2(t_etri *create, int j);
void							ft_ugol3(t_etri *create, int j);
void							ft_ugol4(t_etri *create, int j);
void							ft_ugol5(t_etri *create, int j);
void							ft_ugol6(t_etri *create, int j);
void							ft_ugol7(t_etri *create, int j);
void							ft_ugol8(t_etri *create, int j);
void							ft_tishka1(t_etri *create, int j);
void							ft_tishka2(t_etri *create, int j);
void							ft_tishka3(t_etri *create, int j);
void							ft_tishka4(t_etri *create, int j);
void							ft_palka2(t_etri *create, int j);
void							ft_palka1(t_etri *create, int j);
t_etri							*continue_malloc(t_etri *cre, int fig, int j);
t_etri							*ft_create_node(int figure, int j);
t_etri							*ft_record(int *figures);
void							ft_del_figures(void);

#endif

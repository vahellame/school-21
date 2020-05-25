/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_letters_tabs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 01:33:38 by drosetta          #+#    #+#             */
/*   Updated: 2019/11/25 05:03:48 by drosetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_putfrt.h"
#include "../../libft/libft.h"

void	ft_fill_letters_tab_1(char ***letters)
{
	letters[0][0] = ft_strdup("___ ");
	letters[0][1] = ft_strdup("| | ");
	letters[0][2] = ft_strdup("|_| ");
	letters[1][0] = ft_strdup("_ ");
	letters[1][1] = ft_strdup("| ");
	letters[1][2] = ft_strdup("| ");
	letters[2][0] = ft_strdup("__  ");
	letters[2][1] = ft_strdup(" _| ");
	letters[2][2] = ft_strdup("|__ ");
	letters[3][0] = ft_strdup("__  ");
	letters[3][1] = ft_strdup("__| ");
	letters[3][2] = ft_strdup("__| ");
	letters[4][0] = ft_strdup("_ _ ");
	letters[4][1] = ft_strdup("|_| ");
	letters[4][2] = ft_strdup("  | ");
	letters[5][0] = ft_strdup(" __ ");
	letters[5][1] = ft_strdup("|_  ");
	letters[5][2] = ft_strdup("__| ");
	letters[6][0] = ft_strdup(" __ ");
	letters[6][1] = ft_strdup("|__ ");
	letters[6][2] = ft_strdup("|_| ");
	letters[7][0] = ft_strdup("__ ");
	letters[7][1] = ft_strdup(" / ");
	letters[7][2] = ft_strdup("/  ");
	ft_fill_letters_tab_2(letters);
}

void	ft_fill_letters_tab_2(char ***letters)
{
	letters[8][0] = ft_strdup("___ ");
	letters[8][1] = ft_strdup("|_| ");
	letters[8][2] = ft_strdup("|_| ");
	letters[9][0] = ft_strdup("___ ");
	letters[9][1] = ft_strdup("|_| ");
	letters[9][2] = ft_strdup(" _| ");
	letters[10][0] = ft_strdup("___ ");
	letters[10][1] = ft_strdup("|_| ");
	letters[10][2] = ft_strdup("| | ");
	letters[11][0] = ft_strdup("__  ");
	letters[11][1] = ft_strdup("|_| ");
	letters[11][2] = ft_strdup("|_| ");
	letters[12][0] = ft_strdup(" __ ");
	letters[12][1] = ft_strdup("|   ");
	letters[12][2] = ft_strdup("|__ ");
	letters[13][0] = ft_strdup("__  ");
	letters[13][1] = ft_strdup("| \\ ");
	letters[13][2] = ft_strdup("|_/ ");
	letters[14][0] = ft_strdup(" _ ");
	letters[14][1] = ft_strdup("|_ ");
	letters[14][2] = ft_strdup("|_ ");
	letters[15][0] = ft_strdup("__ ");
	letters[15][1] = ft_strdup("|_ ");
	letters[15][2] = ft_strdup("|  ");
	ft_fill_letters_tab_3(letters);
}

void	ft_fill_letters_tab_3(char ***letters)
{
	letters[16][0] = ft_strdup("___ ");
	letters[16][1] = ft_strdup("| _ ");
	letters[16][2] = ft_strdup("|_| ");
	letters[17][0] = ft_strdup("_ _ ");
	letters[17][1] = ft_strdup("|_| ");
	letters[17][2] = ft_strdup("| | ");
	letters[18][0] = ft_strdup("_ ");
	letters[18][1] = ft_strdup("| ");
	letters[18][2] = ft_strdup("| ");
	letters[19][0] = ft_strdup("  _ ");
	letters[19][1] = ft_strdup("  | ");
	letters[19][2] = ft_strdup("|_| ");
	letters[20][0] = ft_strdup("_  _ ");
	letters[20][1] = ft_strdup("|_/  ");
	letters[20][2] = ft_strdup("| \\_ ");
	letters[21][0] = ft_strdup("_   ");
	letters[21][1] = ft_strdup("|   ");
	letters[21][2] = ft_strdup("|__ ");
	letters[22][0] = ft_strdup("_  _ ");
	letters[22][1] = ft_strdup("|\\/| ");
	letters[22][2] = ft_strdup("|  | ");
	letters[23][0] = ft_strdup("_  _ ");
	letters[23][1] = ft_strdup("|\\ | ");
	letters[23][2] = ft_strdup("| \\| ");
	ft_fill_letters_tab_4(letters);
}

void	ft_fill_letters_tab_4(char ***letters)
{
	letters[24][0] = ft_strdup("___ ");
	letters[24][1] = ft_strdup("| | ");
	letters[24][2] = ft_strdup("|_| ");
	letters[25][0] = ft_strdup("__  ");
	letters[25][1] = ft_strdup("|_| ");
	letters[25][2] = ft_strdup("|   ");
	letters[26][0] = ft_strdup("____ ");
	letters[26][1] = ft_strdup("|  | ");
	letters[26][2] = ft_strdup("|_\\| ");
	letters[27][0] = ft_strdup("___ ");
	letters[27][1] = ft_strdup("|_/ ");
	letters[27][2] = ft_strdup("| \\ ");
	letters[28][0] = ft_strdup(" ___ ");
	letters[28][1] = ft_strdup("|__  ");
	letters[28][2] = ft_strdup("___| ");
	letters[29][0] = ft_strdup("___ ");
	letters[29][1] = ft_strdup(" |  ");
	letters[29][2] = ft_strdup(" |  ");
	letters[30][0] = ft_strdup("_  _ ");
	letters[30][1] = ft_strdup("|  | ");
	letters[30][2] = ft_strdup("|__| ");
	letters[31][0] = ft_strdup("_  _ ");
	letters[31][1] = ft_strdup("|  | ");
	letters[31][2] = ft_strdup(" \\/  ");
	ft_fill_letters_tab_5(letters);
}

void	ft_fill_letters_tab_5(char ***letters)
{
	letters[32][0] = ft_strdup("_ _ _ ");
	letters[32][1] = ft_strdup("| | | ");
	letters[32][2] = ft_strdup("|_|_| ");
	letters[33][0] = ft_strdup("_  _ ");
	letters[33][1] = ft_strdup(" \\/  ");
	letters[33][2] = ft_strdup("_/\\_ ");
	letters[34][0] = ft_strdup("_   _ ");
	letters[34][1] = ft_strdup(" \\_/  ");
	letters[34][2] = ft_strdup("  |   ");
	letters[35][0] = ft_strdup("__ ");
	letters[35][1] = ft_strdup(" / ");
	letters[35][2] = ft_strdup("/_ ");
	letters[36][0] = ft_strdup("   ");
	letters[36][1] = ft_strdup("   ");
	letters[36][2] = ft_strdup("   ");
}

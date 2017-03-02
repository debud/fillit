/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pieces.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborsan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 16:56:40 by cborsan           #+#    #+#             */
/*   Updated: 2017/02/18 17:32:57 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		get_template(t_tetris *tetriminos)
{
	if (tetriminos)
	{
		ft_strcpy(tetriminos[1].ptemplate, "##..##");
		ft_strcpy(tetriminos[2].ptemplate, "####");
		ft_strcpy(tetriminos[3].ptemplate, "#...#...#...#");
		ft_strcpy(tetriminos[4].ptemplate, "#...#..##");
		ft_strcpy(tetriminos[5].ptemplate, "###...#");
		ft_strcpy(tetriminos[6].ptemplate, "##..#...#");
		ft_strcpy(tetriminos[7].ptemplate, "#...###");
		ft_strcpy(tetriminos[8].ptemplate, "#...#...##");
		ft_strcpy(tetriminos[9].ptemplate, "#.###");
		ft_strcpy(tetriminos[10].ptemplate, "##...#...#");
		ft_strcpy(tetriminos[11].ptemplate, "###.#");
		ft_strcpy(tetriminos[12].ptemplate, "#...##..#");
		ft_strcpy(tetriminos[13].ptemplate, "#..###");
		ft_strcpy(tetriminos[14].ptemplate, "#..##...#");
		ft_strcpy(tetriminos[15].ptemplate, "###..#");
		ft_strcpy(tetriminos[16].ptemplate, "#..##..#");
		ft_strcpy(tetriminos[17].ptemplate, "##...##");
		ft_strcpy(tetriminos[18].ptemplate, "#...##...#");
		ft_strcpy(tetriminos[19].ptemplate, "##.##");
	}
}

t_tetris	*init_pieces(void)
{
	int			i;
	t_tetris	*tetriminos;

	i = 1;
	tetriminos = (t_tetris *)malloc(sizeof(t_tetris) * 20);
	if (tetriminos)
	{
		while (i <= 19)
		{
			tetriminos[i].ptemplate = ft_strnew(16);
			tetriminos[i].type = i;
			tetriminos[i].letter = 'A';
			i++;
		}
		get_template(tetriminos);
		get_coordonates1(tetriminos);
		get_coordonates2(tetriminos);
		get_coordonates3(tetriminos);
		get_coordonates4(tetriminos);
		get_coordonates5(tetriminos);
	}
	else
		ft_error();
	return ((t_tetris *)tetriminos);
}

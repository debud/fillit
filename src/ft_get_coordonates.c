/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_coordonates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 17:27:44 by dbud              #+#    #+#             */
/*   Updated: 2017/02/21 19:16:35 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	get_coordonates1(t_tetris *tetriminos)
{
	tetriminos[1].p1.x = 0;
	tetriminos[1].p1.y = 1;
	tetriminos[1].p2.x = 1;
	tetriminos[1].p2.y = 0;
	tetriminos[1].p3.x = 1;
	tetriminos[1].p3.y = 1;
	tetriminos[2].p1.x = 0;
	tetriminos[2].p1.y = 1;
	tetriminos[2].p2.x = 0;
	tetriminos[2].p2.y = 2;
	tetriminos[2].p3.x = 0;
	tetriminos[2].p3.y = 3;
	tetriminos[3].p1.x = 1;
	tetriminos[3].p1.y = 0;
	tetriminos[3].p2.x = 2;
	tetriminos[3].p2.y = 0;
	tetriminos[3].p3.x = 3;
	tetriminos[3].p3.y = 0;
	tetriminos[4].p1.x = 1;
	tetriminos[4].p1.y = 0;
	tetriminos[4].p2.x = 2;
	tetriminos[4].p2.y = 0;
	tetriminos[4].p3.x = 2;
	tetriminos[4].p3.y = -1;
}

void	get_coordonates2(t_tetris *tetriminos)
{
	tetriminos[5].p1.x = 0;
	tetriminos[5].p1.y = 1;
	tetriminos[5].p2.x = 0;
	tetriminos[5].p2.y = 2;
	tetriminos[5].p3.x = 1;
	tetriminos[5].p3.y = 2;
	tetriminos[6].p1.x = 0;
	tetriminos[6].p1.y = 1;
	tetriminos[6].p2.x = 1;
	tetriminos[6].p2.y = 0;
	tetriminos[6].p3.x = 2;
	tetriminos[6].p3.y = 0;
	tetriminos[7].p1.x = 1;
	tetriminos[7].p1.y = 0;
	tetriminos[7].p2.x = 1;
	tetriminos[7].p2.y = 1;
	tetriminos[7].p3.x = 1;
	tetriminos[7].p3.y = 2;
	tetriminos[8].p1.x = 1;
	tetriminos[8].p1.y = 0;
	tetriminos[8].p2.x = 2;
	tetriminos[8].p2.y = 0;
	tetriminos[8].p3.x = 2;
	tetriminos[8].p3.y = 1;
}

void	get_coordonates3(t_tetris *tetriminos)
{
	tetriminos[9].p1.x = 1;
	tetriminos[9].p1.y = 0;
	tetriminos[9].p2.x = 1;
	tetriminos[9].p2.y = -1;
	tetriminos[9].p3.x = 1;
	tetriminos[9].p3.y = -2;
	tetriminos[10].p1.x = 0;
	tetriminos[10].p1.y = 1;
	tetriminos[10].p2.x = 1;
	tetriminos[10].p2.y = 1;
	tetriminos[10].p3.x = 2;
	tetriminos[10].p3.y = 1;
	tetriminos[11].p1.x = 0;
	tetriminos[11].p1.y = 1;
	tetriminos[11].p2.x = 0;
	tetriminos[11].p2.y = 2;
	tetriminos[11].p3.x = 1;
	tetriminos[11].p3.y = 0;
	tetriminos[12].p1.x = 1;
	tetriminos[12].p1.y = 0;
	tetriminos[12].p2.x = 1;
	tetriminos[12].p2.y = 1;
	tetriminos[12].p3.x = 2;
	tetriminos[12].p3.y = 0;
}

void	get_coordonates4(t_tetris *tetriminos)
{
	tetriminos[13].p1.x = 1;
	tetriminos[13].p1.y = -1;
	tetriminos[13].p2.x = 1;
	tetriminos[13].p2.y = 0;
	tetriminos[13].p3.x = 1;
	tetriminos[13].p3.y = 1;
	tetriminos[14].p1.x = 1;
	tetriminos[14].p1.y = -1;
	tetriminos[14].p2.x = 1;
	tetriminos[14].p2.y = 0;
	tetriminos[14].p3.x = 2;
	tetriminos[14].p3.y = 0;
	tetriminos[15].p1.x = 0;
	tetriminos[15].p1.y = 1;
	tetriminos[15].p2.x = 0;
	tetriminos[15].p2.y = 2;
	tetriminos[15].p3.x = 1;
	tetriminos[15].p3.y = 1;
	tetriminos[16].p1.x = 1;
	tetriminos[16].p1.y = -1;
	tetriminos[16].p2.x = 1;
	tetriminos[16].p2.y = 0;
	tetriminos[16].p3.x = 2;
	tetriminos[16].p3.y = -1;
}

void	get_coordonates5(t_tetris *tetriminos)
{
	tetriminos[17].p1.x = 0;
	tetriminos[17].p1.y = 1;
	tetriminos[17].p2.x = 1;
	tetriminos[17].p2.y = 1;
	tetriminos[17].p3.x = 1;
	tetriminos[17].p3.y = 2;
	tetriminos[18].p1.x = 1;
	tetriminos[18].p1.y = 0;
	tetriminos[18].p2.x = 1;
	tetriminos[18].p2.y = 1;
	tetriminos[18].p3.x = 2;
	tetriminos[18].p3.y = 1;
	tetriminos[19].p1.x = 0;
	tetriminos[19].p1.y = 1;
	tetriminos[19].p2.x = 1;
	tetriminos[19].p2.y = 0;
	tetriminos[19].p3.x = 1;
	tetriminos[19].p3.y = -1;
}

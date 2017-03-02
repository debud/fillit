/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 13:09:28 by dbud              #+#    #+#             */
/*   Updated: 2017/02/18 17:38:14 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_print_map(t_square square)
{
	int i;
	int j;

	i = 0;
	while (i < square.side)
	{
		j = 0;
		while (j < square.side)
		{
			ft_putchar(square.map[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int			ft_check_tetris(t_list_tetris *list, t_square square, int i, int j)
{
	if (square.side > j + list->content.p1.y &&
			square.side > i + list->content.p1.x &&
			square.side > j + list->content.p2.y &&
			square.side > i + list->content.p2.x &&
			square.side > j + list->content.p3.y &&
			square.side > i + list->content.p3.x)
	{
		if (square.map[i][j] == '.')
			if (square.map[i + list->content.p1.x]
					[j + list->content.p1.y] == '.'
					&& square.map[i + list->content.p2.x]
					[j + list->content.p2.y] == '.'
					&& square.map[i + list->content.p3.x]
					[j + list->content.p3.y] == '.')
			{
				return (1);
			}
	}
	return (0);
}

t_square	ft_add_tetris(t_list_tetris *list, t_square square, int i, int j)
{
	int			l;
	int			c;
	t_square	new;

	new.side = square.side;
	new.map = ft_map_allocate();
	l = 0;
	while (l < square.side)
	{
		c = 0;
		while (c < square.side)
		{
			new.map[l][c] = square.map[l][c];
			c++;
		}
		l++;
	}
	new.map[i][j] = list->content.letter;
	new.map[i + list->content.p1.x]
		[j + list->content.p1.y] = list->content.letter;
	new.map[i + list->content.p2.x]
		[j + list->content.p2.y] = list->content.letter;
	new.map[i + list->content.p3.x]
		[j + list->content.p3.y] = list->content.letter;
	return (new);
}

int			ft_get_map(t_list_tetris *list, t_square square)
{
	int i;
	int j;

	i = -1;
	while (++i < square.side)
	{
		j = -1;
		while (++j < square.side)
		{
			if (ft_check_tetris(list, square, i, j) && list->next)
			{
				if (ft_get_map(list->next,
							ft_add_tetris(list, square, i, j)) == 1)
					return (1);
			}
			if (ft_check_tetris(list, square, i, j) && !(list->next))
			{
				ft_print_map(ft_add_tetris(list, square, i, j));
				return (1);
			}
		}
	}
	return (0);
}

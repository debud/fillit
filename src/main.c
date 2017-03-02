/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 14:42:46 by dbud              #+#    #+#             */
/*   Updated: 2017/02/18 17:34:49 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_solve(t_list_tetris *list, int nb_figures)
{
	t_square	square;
	int			ok;

	if (nb_figures >= 1 && nb_figures <= 26)
	{
		square.side = ft_get_side(nb_figures);
		square.map = ft_map_allocate();
		ft_init_map(square.map);
		ok = ft_get_map(list, square);
		while (ok == 0)
		{
			square.side++;
			ok = ft_get_map(list, square);
		}
	}
	else
		ft_error();
}

int		main(int argc, char **argv)
{
	int				fd;
	int				nb_figures;
	t_list_tetris	*list;
	t_tetris		*tetriminos;

	list = NULL;
	tetriminos = init_pieces();
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		exit(0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_error();
	nb_figures = ft_read_file(fd, &list, tetriminos);
	if (list)
		ft_solve(list, nb_figures);
	else
		ft_error();
	return (0);
}

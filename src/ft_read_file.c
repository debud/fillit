/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 17:58:37 by dbud              #+#    #+#             */
/*   Updated: 2017/02/21 19:47:39 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_validate(char *str, int end)
{
	int		i;
	int		line;
	int		char_nb;
	int		sharp_nb;

	sharp_nb = 0;
	line = 0;
	i = -1;
	char_nb = 0;
	str[end] = '\0';
	while (str[++i])
	{
		char_nb++;
		if (str[i] == '#')
			sharp_nb++;
		if (str[i] != '.' && str[i] != '\n' && str[i] != '#')
			ft_error();
		if (str[i] == '\n' && char_nb % 5 != 0 && char_nb != 21)
			ft_error();
		if (str[i] == '\n')
			line++;
		if ((line > 4 && char_nb != 21) || sharp_nb > 4)
			ft_error();
	}
}

const char	*ft_remove_endline(char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = -1;
	dest = (char *)malloc(21);
	while (str[i])
	{
		if (str[i] != '\n')
			dest[++j] = str[i];
		i++;
	}
	return ((const char *)dest);
}

int			ft_check_template(char *str, t_tetris *tetriminos)
{
	int i;

	i = 1;
	while (i <= 19)
	{
		if (ft_strstr(str, tetriminos[i].ptemplate))
			return (i);
		i++;
	}
	return (0);
}

int			ft_read_file(int fd, t_list_tetris **list, t_tetris *tetriminos)
{
	char	*buf;
	int		i;
	int		type;
	int		last;
	int		nb_figures;

	last = 0;
	nb_figures = 0;
	buf = (char *)malloc(BUFFER + 1);
	while ((i = read(fd, buf, BUFFER)) > 0)
	{
		if (i != 0)
			last = i;
		ft_validate(buf, i);
		ft_strcpy(buf, ft_remove_endline(buf));
		type = ft_check_template(buf, tetriminos);
		if (type)
			ft_lst_manage(list, tetriminos[type], nb_figures++);
		else
			ft_error();
	}
	if (last == 21)
		ft_error();
	return (nb_figures);
}

int			ft_get_side(int nb_figures)
{
	int		side;
	int		nb;

	nb = nb_figures * 4;
	side = 1;
	while (side * side < nb)
		side++;
	return (side);
}

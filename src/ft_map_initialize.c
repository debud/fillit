/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_initialize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 17:37:13 by dbud              #+#    #+#             */
/*   Updated: 2017/02/21 19:16:54 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_map_allocate(void)
{
	int		i;
	char	**map;

	i = 0;
	map = (char **)malloc(sizeof(char *) * 12);
	if (!map)
		ft_error();
	while (i <= 11)
	{
		map[i] = (char *)malloc(sizeof(char) * 13);
		if (!map[i])
			ft_error();
		i++;
	}
	map[11][12] = '\0';
	return ((char	**)map);
}

void		ft_init_map(char **map)
{
	int i;
	int j;

	i = 0;
	while (i <= 11)
	{
		j = 0;
		while (j <= 11)
		{
			map[i][j] = '.';
			j++;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborsan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 16:58:17 by cborsan           #+#    #+#             */
/*   Updated: 2017/02/21 19:34:18 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
# include <stdlib.h>

# define BUFFER 21
# define SIZE 4
# define MAX 5

typedef struct				s_square
{
	int						side;
	char					**map;
}							t_square;

typedef struct				s_point
{
	int						x;
	int						y;
}							t_point;
typedef struct				s_tetris
{
	int						type;
	char					*ptemplate;
	char					letter;
	t_point					p1;
	t_point					p2;
	t_point					p3;
}							t_tetris;
typedef struct				s_list_tetris
{
	t_tetris				content;
	struct s_list_tetris	*next;
}							t_list_tetris;
t_list_tetris				*ft_lstnew_tetris(t_tetris content, int nb_figures);
void						ft_lstadd_tetris(t_list_tetris *alst,
							t_list_tetris *new);

t_tetris					*init_pieces();
void						ft_error();
int							ft_read_file(int fd, t_list_tetris **list,
							t_tetris	*tetriminos);
int							ft_get_side(int		nb_figures);
char						**ft_map_allocate();
void						ft_init_map(char **map);
int							ft_get_map(t_list_tetris *list, t_square square);
void						ft_lstadd_f(t_list_tetris **alst,
		t_list_tetris *new);
void						test(t_list_tetris **list, int nb_figures,
							t_tetris *tetriminos);
void						get_coordonates1(t_tetris *tetriminos);
void						get_coordonates2(t_tetris *tetriminos);
void						get_coordonates3(t_tetris *tetriminos);
void						get_coordonates4(t_tetris *tetriminos);
void						get_coordonates5(t_tetris *tetriminos);
char						**ft_map_allocate(void);
void						ft_init_map(char **map);
void						ft_lst_manage(t_list_tetris **list,
		t_tetris content, int nb_figures);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 19:17:14 by dbud              #+#    #+#             */
/*   Updated: 2017/02/21 19:49:25 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void				ft_lstadd_tetris(t_list_tetris *alst, t_list_tetris *new)
{
	t_list_tetris *aux;

	aux = alst;
	if (alst == NULL)
	{
		new->next = NULL;
		aux = new;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		new->next = NULL;
		aux->next = new;
		while (alst)
			alst = alst->next;
	}
}

t_list_tetris		*ft_lstnew_tetris(t_tetris content, int nb_figures)
{
	t_list_tetris *ret;

	ret = (t_list_tetris *)malloc(sizeof(t_list_tetris));
	if (!ret)
		return (NULL);
	content.letter = 'A' + nb_figures;
	ret->content = content;
	ret->next = NULL;
	return ((t_list_tetris *)ret);
}

void				ft_lst_manage(t_list_tetris **list,
		t_tetris content, int nb_figures)
{
	if (*list == NULL)
		*list = ft_lstnew_tetris(content, nb_figures++);
	else
		ft_lstadd_tetris(*list, ft_lstnew_tetris(content, nb_figures++));
}

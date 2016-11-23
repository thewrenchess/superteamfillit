/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_create_elem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:04:09 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/21 16:04:11 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*lst_create_elem(size_t size)
{
	t_list	*lst;

	lst = (t_list*)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->str = ft_strnew(size);
	if (!(lst->str))
		return (NULL);
	lst->buf_size = size;
	return (lst);
}

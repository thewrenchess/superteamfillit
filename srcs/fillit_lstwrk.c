/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_lstwrk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 18:04:47 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:30:43 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

t_list	*lst_create_elem(const size_t size)
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

void	ft_freeinputlst(t_list **lst)
{
	if (!*lst)
		return ;
	free((*lst)->str);
	free(*lst);
	*lst = NULL;
}

void	append_list(t_list **lst, char c, size_t i)
{
	char	*temp;

	if (i == (*lst)->buf_size)
	{
		(*lst)->buf_size = i * 2;
		temp = ft_strnew((*lst)->buf_size);
		temp = ft_strcpy(temp, (*lst)->str);
		free((*lst)->str);
		temp[i] = c;
		(*lst)->str = temp;
	}
	else
		(*lst)->str[i] = c;
}

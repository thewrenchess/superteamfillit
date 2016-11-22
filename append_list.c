/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 18:04:47 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/21 18:04:48 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

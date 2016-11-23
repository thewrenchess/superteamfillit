/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:02:40 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/23 14:02:41 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_link	*ft_newlink(char *str)
{
	t_link	*lnk;

	lnk = (t_link*)malloc(sizeof(lnk));
	if (!lnk)
		return (NULL);
	lnk->sqr = ft_strnew(ft_strlen(str));
	lnk->sqr = ft_strcpy(lnk->sqr, str);
	lnk->next = NULL;
	return (lnk);
}

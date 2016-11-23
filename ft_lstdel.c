/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:27:55 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/08 18:27:57 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lstdel(t_link **alnk)
{
	t_link	*temp1;
	t_link	*temp2;

	temp1 = *alnk;
	while (temp1)
	{
		temp2 = temp1->next;
		free(temp1->sqr);
		free(temp1);
		temp1 = temp2;
	}
	*alnk = temp1;
	*alnk = NULL;
}

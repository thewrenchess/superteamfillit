/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secondmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:21:46 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/23 10:21:47 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	secondmain(char **tab, const size_t count)
{
	char	*sqr;
	size_t	side;
	t_link	*alnk;
//	char	rs;

	(void)tab;
	side = ft_findside(count);
	sqr = ft_makesqr(side);
	alnk = ft_newlink(ft_makesqr(side));
	if (!alnk)
		return ;
//	rs = thinkhub(tab, alnk);
//	ft_putchar(rs);
	ft_putstr(alnk->sqr);
	ft_lstdel(&alnk);
	free(sqr);
}

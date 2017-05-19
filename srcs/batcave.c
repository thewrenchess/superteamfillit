/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   batcave.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:09:02 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:30:39 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

static size_t	ft_isfilled(char *s, size_t i)
{
	while (s[i] != '.')
		i++;
	return (i);
}

static int		ft_endofis(char *sqr, char **tab, int it, size_t *is)
{
	it--;
	if (it >= 0)
		*is = ft_deletelast(sqr, tab[it]);
	return (it);
}

char			*batcave(char **tab, char *sqr, size_t side)
{
	size_t	is;
	int		it;
	t_corr	acor;

	is = 0;
	it = 0;
	while (it >= 0)
	{
		if (!tab[it])
			return (sqr);
		is = ft_isfilled(sqr, is);
		acor = ft_iffits(sqr, tab[it], is, side);
		if (acor.a != acor.b)
		{
			ft_fillsqr(sqr, tab[it], acor);
			is = 0;
			it++;
		}
		else if (is < side * (side + 1) - 4)
			is++;
		else if (is >= side * (side + 1) - 4)
			it = ft_endofis(sqr, tab, it, &is);
	}
	free(sqr);
	return (batcave(tab, ft_makesqr(side + 1), side + 1));
}

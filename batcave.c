/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   batcave.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:09:02 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/25 15:09:03 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>	//DELETE
static size_t	ft_isfilled(char *s, size_t i)
{
	while (s[i] != '.')
		i++;
	return (i);
}

char			*batcave(char **tab, char *sqr, size_t side)
{
	size_t	is;
	size_t	it;
	t_corr	acor;

	is = 0;
	it = 0;
	printf("square expands: side: %zu\n", side);
	while (!(is >= side * (side + 1) - 4 && !it))
	{
		printf("is: %zu it: %zu\n", is, it);
		if (!tab[it])
			return (sqr);
		is = ft_isfilled(sqr, is);
		acor = ft_iffits(sqr, tab[it], is, side);
		if (acor.a < 26)
		{
			ft_fillsqr(sqr, tab[it], acor);
			is = 0;
			it++;
		}
		else if (is < side * (side + 1) - 4)
			is++;
		else if (is >= side * (side + 1) - 4 && it)
		{
			it--;
			is = ft_deletelast(sqr, tab[it]);
		}
	}
	free(sqr);
	return (batcave(tab, ft_makesqr(side + 1), side + 1));
}

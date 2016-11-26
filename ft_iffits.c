/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iffits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 21:15:10 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/24 21:15:11 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_corr	ft_nullacor(t_corr *acor)
{
	(*acor).a = 27;
	(*acor).b = 0;
	(*acor).c = 0;
	(*acor).d = 0;
	return (*acor);
}

t_corr			ft_iffits(char *sqr, char *shape, size_t i, size_t side)
{
	t_corr	acor;

	if (!shape)
		return (ft_nullacor(&acor));
	acor = ft_findcorr(shape);
	acor.a = acor.a / 5 * (side + 1) + acor.a % 5;
	acor.b = acor.b / 5 * (side + 1) + acor.b % 5;
	acor.c = acor.c / 5 * (side + 1) + acor.c % 5;
	acor.d = acor.d / 5 * (side + 1) + acor.d % 5;
	acor = ft_movecorr(acor, i);
	if (sqr[acor.a] != '.'
		|| sqr[acor.b] != '.'
		|| sqr[acor.c] != '.'
		|| sqr[acor.d] != '.')
		return (ft_nullacor(&acor));
	else
		return (acor);
}

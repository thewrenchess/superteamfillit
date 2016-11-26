/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movecorr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:31:12 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/24 18:31:13 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_corr	ft_movecorr(t_corr acor, size_t i)
{
	size_t	diff;

	if (acor.a == i)
		return (acor);
	else if (acor.a > i)
	{
		diff = acor.a - i;
		acor.a = acor.a - diff;
		acor.b = acor.b - diff;
		acor.c = acor.c - diff;
		acor.d = acor.d - diff;
	}
	else
	{
		diff = i - acor.a;
		acor.a = acor.a + diff;
		acor.b = acor.b + diff;
		acor.c = acor.c + diff;
		acor.d = acor.d + diff;
	}
	return (acor);
}

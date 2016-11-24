/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findcorr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:28:02 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/23 16:28:03 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_corr	ft_findcorr(const char *str)
{
	t_corr	acor;

	acor.a = 0;
	while (str[acor.a] < 'A' || str[acor.a] > 'Z')
		acor.a++;
	acor.b = acor.a + 1;
	while (str[acor.b] < 'A' || str[acor.b] > 'Z')
		acor.b++;
	acor.c = acor.b + 1;
	while (str[acor.c] < 'A' || str[acor.c] > 'Z')
		acor.c++;
	acor.d = acor.c + 1;
	while (str[acor.d] < 'A' || str[acor.d] > 'Z')
		acor.d++;
	return (acor);
}

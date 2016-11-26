/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillsqr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:29:14 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/25 15:29:16 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillsqr(char *sqr, char *src, t_corr acor)
{
	char	c;
	size_t	i;

	i = 0;
	while (src[i] < 'A' || src[i] > 'Z')
		i++;
	c = src[i];
	sqr[acor.a] = c;
	sqr[acor.b] = c;
	sqr[acor.c] = c;
	sqr[acor.d] = c;
}
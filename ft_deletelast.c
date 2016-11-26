/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletelast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:36:30 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/25 15:36:31 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_deletelast(char *sqr, char *src)
{
	size_t	i;
	size_t	start;
	char	c;

	i = 0;
	while (src[i] < 'A' || src[i] > 'Z')
		i++;
	c = src[i];
	i = 0;
	while (sqr[i] != c)
		i++;
	start = i;
	while (sqr[i])
	{
		if (sqr[i] == c)
			sqr[i] = '.';
		i++;
	}
	return (start + 1);
}

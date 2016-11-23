/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findside.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:08:56 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/23 11:08:58 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_findside(size_t count)
{
	size_t	i;
	size_t	total;

	total = count * 4;
	i = 1;
	while (i * i < total)
		i++;
	return (i);
}

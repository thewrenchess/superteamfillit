/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 00:19:56 by tchan             #+#    #+#             */
/*   Updated: 2016/11/10 00:19:56 by tchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int x;

	x = 0;
	while (src[x] != '\0' && x < (int)n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < (int)n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

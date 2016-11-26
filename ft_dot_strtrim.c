/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_strtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 19:43:44 by tchan             #+#    #+#             */
/*   Updated: 2016/11/23 19:43:45 by tchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_dot_strtrim(char *s)
{
	int		x;
	char	*str;
	int		len;

	len = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	x = -1;
	while (s[len - 1] == '.')
		len--;
	while (s[++x] == '.')
		len--;
	if (len < 0)
		len = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s += x;
	x = -1;
	while (++x < len)
		str[x] = *s++;
	str[x] = '\0';
	return (str);
}

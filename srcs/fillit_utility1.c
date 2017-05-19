/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_utility1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:36:30 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:30:56 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_remove_nl(char *str)
{
	char	*pread;
	char	*pwrite;

	pread = str;
	pwrite = str;
	while (*pread)
	{
		*pwrite = *pread++;
		pwrite += (*pwrite != '\n');
	}
	*pwrite = '\0';
}

char	*ft_dot_strtrim(char *s)
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

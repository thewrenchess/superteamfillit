/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 00:20:57 by tchan             #+#    #+#             */
/*   Updated: 2017/05/19 13:31:13 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

static int	ft_cw(char *s, char c)
{
	int x;
	int flag;
	int wordcount;

	x = 0;
	flag = 0;
	wordcount = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			flag = 0;
			x++;
		}
		else if (flag == 0 && s[x] != c)
		{
			flag = 1;
			wordcount++;
			x++;
		}
		else
			x++;
	}
	return (wordcount);
}

static int	ft_wl(char *s, int index, char c)
{
	int x;

	x = 0;
	while (s[index] != c && s[index] != '\0')
	{
		index++;
		x++;
	}
	return (x);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		x[4];

	ft_bzero(x, sizeof(int) * 4);
	if (!s || !(str = (char**)malloc(sizeof(char*) * (ft_cw((char*)s, c)) + 1)))
		return (NULL);
	while (s[x[0]] != '\0')
		if (s[x[0]] != c)
		{
			if (!(str[x[2]] = (char*)malloc(ft_wl((char*)s, x[0], c))))
				return (NULL);
			x[3] = ft_wl((char*)s, x[0], c);
			while (++(x[1]) - 1 < x[3] && ++(x[0]))
				str[(x[2])][(x[1]) - 1] = s[(x[0]) - 1];
			str[(x[2])][(x[1]) - 1] = '\0';
			x[1] = 0;
			x[2]++;
		}
		else
			(x[0])++;
	str[x[2]] = NULL;
	return (str);
}

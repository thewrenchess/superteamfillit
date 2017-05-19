/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_utility2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:31:12 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:30:59 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

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

size_t	ft_findside(const size_t count)
{
	size_t	i;
	size_t	total;

	total = count * 4;
	i = 1;
	while (i * i < total)
		i++;
	return (i);
}

char	*ft_makesqr(const size_t side)
{
	char	*rs;
	size_t	len;
	size_t	i;
	size_t	count;

	len = side * (side + 1);
	rs = ft_strnew(len);
	i = 0;
	count = 0;
	while (i < len)
	{
		if (count == side)
		{
			rs[i] = '\n';
			count = 0;
		}
		else
		{
			rs[i] = '.';
			count++;
		}
		i++;
	}
	return (rs);
}

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

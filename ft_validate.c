/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:48:50 by tchan             #+#    #+#             */
/*   Updated: 2016/11/21 14:48:53 by tchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "gtable.h"

#include <stdio.h>

static void		ft_set_zero(int *w, int *x, int *y, int *z)
{
	*w = -1;
	*x = 0;
	*y = 0;
	*z = 0;
}

static size_t	ft_checkshape(char *str)
{
	char	*tmp;
	int		index;

	index = 0;
	tmp = ft_strnew(20);
	tmp = ft_strncpy(tmp, str, 20);
	ft_remove_nl(tmp);
	tmp = ft_dot_strtrim(tmp);
	while (index < 19)
	{
		if (ft_strcmp(tmp, g_tdef[index]) == 0)
			return (1);
		index++;
	}
	free(tmp);
	return (0);
}

static size_t	ft_checklines(char *str)
{
	char	**tmp;
	int		splindex;
	int		tindex;

	tindex = -1;
	splindex = 0;
	if (ft_strlen(str) >= 545)
		return (0);
	tmp = ft_strsplit(str, '\n');
	while (tmp[splindex])
	{
		while (++tindex < 5)
			if (strcmp(tmp[splindex], g_falsepositives[tindex]) == 0)
				return (0);
		if (ft_strlen(tmp[splindex]) != 4)
		{
			free(tmp);
			return (0);
		}
		tindex = -1;
		splindex++;
	}
	free(tmp);
	return (1);
}

static void		ft_inc_count(char **tmp, int *nl, int *dot, int *hash)
{
	if (**tmp == '\n')
		*nl += 1;
	if (**tmp == '.')
		*dot += 1;
	if (**tmp == '#')
		*hash += 1;
	(*tmp) += 1;
}

size_t			ft_validate(char *str)
{
	t_ntable	n;
	char		*tmp;

	n.tcount = 0;
	ft_set_zero(&(n.i), &(n.nlc), &(n.dc), &(n.hc));
	tmp = str;
	if (ft_checklines(str) == 0)
		return (0);
	while (*str != '\0' && *tmp != '\0')
	{
		while (*tmp != '\0' && ++n.i < 20)
			ft_inc_count(&tmp, &(n.nlc), &(n.dc), &(n.hc));
		if (!(n.i == 20 || n.i == 19) || n.nlc != 4 || n.dc != 12 || n.hc != 4)
			return (0);
		if (ft_checkshape(str))
			n.tcount++;
		else
			return (0);
		if (*(str += 20) == '\n')
			str += 1;
		if (*(++tmp) == '\0' && n.i == 20)
			return (0);
		ft_set_zero(&(n.i), &(n.nlc), &(n.dc), &(n.hc));
	}
	return (n.tcount);
}

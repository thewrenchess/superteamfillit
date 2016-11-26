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

// Needs debugging:
// works but requires one more new line at the end of input file.

static void		ft_set_zero(int *w, int *x, int *y, int *z)
{
	*w = 0;
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
	tmp = ft_strsplit(str, '\n');
	while (tmp[splindex])
	{
		while (++tindex < 5)
			if (ft_strcmp(tmp[splindex], g_falsepositives[tindex]) == 0)
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
	ft_set_zero(&(n.i), &(n.nlcount), &(n.dcount), &(n.hcount));
	tmp = str;
	if (ft_checklines(str) == 0)
		return (0);
	while (*str != '\0' && *tmp != '\0')
	{
		while (*tmp != '\0' && n.i++ < 20)
			ft_inc_count(&tmp, &(n.nlcount), &(n.dcount), &(n.hcount));
		if (n.i != 21 || n.nlcount != 4 || n.dcount != 12 || n.hcount != 4)
			return (0);
		if (ft_checkshape(str))
			n.tcount++;
		if (*(str + 22) != '\0')
			str += 21;
		if ((tmp++ + 1) == '\0' && n.tcount > 26)
			return (0);
		ft_set_zero(&(n.i), &(n.nlcount), &(n.dcount), &(n.hcount));
	}
	return (n.tcount);
}

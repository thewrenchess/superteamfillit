/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:46:56 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:31:26 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

static void	main_2nd(char **tab, const size_t count)
{
	size_t	side;
	char	*sqr;

	side = ft_findside(count);
	sqr = ft_makesqr(side);
	sqr = batcave(tab, sqr, side);
	ft_putstr(sqr);
	free(sqr);
}

int			main(int arc, char **arv)
{
	t_list	*lst;
	char	**tab;
	size_t	count;

	if (arc != 2 || !arv[1])
		USAGE;
	lst = lst_create_elem(63);
	if (!lst)
		return (1);
	ft_read_in(arv[1], lst);
	count = ft_validate(lst->str);
	if (!count)
		ERROR;
	tab = ft_putintab(lst->str, count);
	if (!tab)
		return (1);
	ft_freeinputlst(&lst);
	main_2nd(tab, count);
	ft_freetab(&tab);
	return (0);
}

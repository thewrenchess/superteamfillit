/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:46:56 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/21 15:47:00 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int arc, char **arv)
{
	t_list	*lst;
	char	**tab;
	size_t	count;
	size_t	i;	//DELETE

	i = 0;	//DELETE
	count = 26;	//DELETE
	if (arc != 2 || !arv[1])
	{
		USAGE;
		return (1);
	}
	lst = lst_create_elem(63);
	if (!lst)
		return (1);
	ft_read_in(arv[1], lst);
	tab = ft_putintab(lst->str, count);
	if (!tab)
		return (1);
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	free(lst->str);
	free(lst);
	return (0);
}

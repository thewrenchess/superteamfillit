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

	if (arc != 2 || !arv[1])
	{
		USAGE;
		return (1);
	}
	lst = lst_create_elem(63);
	ft_read_in(arv[1], lst);
	ft_putstr(lst->str);
	free(lst->str);
	free(lst);
	return (0);
}

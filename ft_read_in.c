/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_in.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:24:41 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/21 16:24:47 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_read_in(const char *src, t_list *lst)
{
	int		fd;
	char	buf;
	size_t	i;

	fd = open(src, O_RDONLY);
	if (fd < 3)
		exit(1);
	buf = '\0';
	i = 0;
	while (read(fd, &buf, 1))
	{
		append_list(&lst, buf, i);
		i++;
	}
}

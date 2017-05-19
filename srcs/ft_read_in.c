/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_in.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:24:41 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:31:06 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

void	ft_read_in(const char *src, t_list *lst)
{
	int		fd;
	char	buf;
	size_t	i;

	fd = open(src, O_RDONLY);
	if (fd == -1)
		return ;
	buf = '\0';
	i = 0;
	while (read(fd, &buf, 1))
	{
		append_list(&lst, buf, i);
		i++;
	}
	close(fd);
}

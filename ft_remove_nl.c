/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 19:49:45 by tchan             #+#    #+#             */
/*   Updated: 2016/11/23 19:49:48 by tchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_remove_nl(char *str)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gtable.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:14:24 by tchan             #+#    #+#             */
/*   Updated: 2016/11/26 10:03:34 by tchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GTABLE_H
# define GTABLE_H
# define TDEFVALUES TDEF1 TDEF2 TDEF3 TDEF4
# define TDEF1 "####", "#...#...#...#", "##.##", "#...##...#", "##...##",
# define TDEF2 "#..##..#", "##..##", "#...#...##", "###.#", "##...#...#",
# define TDEF3 "#.###", "#...#..##", "#...###", "##..#...#", "###...#",
# define TDEF4 "#..###", "#...##..#", "###..#", "#..##...#"

char	*g_tdef[19] = {TDEFVALUES};
char	*g_falsepositives[5] = {".#.#", "#.#.", "#..#", "##.#", "#.##"};

#endif
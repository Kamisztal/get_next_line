/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 09:15:47 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/19 09:15:47 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*stash_read(int fd, char *stash)
{
	char	buffer;
	int		check;

	check = 0;
	while (!ft_strchr(stash, '\n'))
	{
		check = read(fd, buffer, BUFFER_SIZE);


	}
	return (stash);
}

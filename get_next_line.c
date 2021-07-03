/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:16:14 by ygil              #+#    #+#             */
/*   Updated: 2021/06/26 16:35:20 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	static char		*start;
	char			*buf;
	char			*tmp;
	int				check;

	if (fd < 0 || line == 0 || BUFFER_SIZE <= 0)
		return (-1);

}

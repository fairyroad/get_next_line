/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:15:07 by ygil              #+#    #+#             */
/*   Updated: 2021/06/26 16:16:42 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifdef _WIN32
#  include <io.h>
# else
#  include <unistd.h>
# endif

# include <stdlib.h>
# include <limits.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 10240
# endif

# define END 0
# define SUCCESS 1
# define ERROR -1

int		get_next_line(int fd, char **line);
#endif

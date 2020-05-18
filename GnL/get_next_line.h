/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 19:34:24 by kmcgrego          #+#    #+#             */
/*   Updated: 2020/05/18 19:34:24 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8

#include <stdlib.h>
#include <unistd.h>

# define MAX_FD 2147483648
# define MIN_FD -2147483648

int get_next_line(const int fd, char **line);

#endif
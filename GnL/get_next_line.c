/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 19:34:24 by kmcgrego          #+#    #+#             */
/*   Updated: 2020/05/18 19:34:24 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "get_next_line.h"

static  int		ft_verify(char *in, char **return_result)
{
	char		*temp;
	char		*temp2;

	if (ft_strrchr(in, '\n'))
	{
		in = ft_strcpy(in, & ft_strchr(in, '\n')[1]);
		temp = ft_strdup(in);
		ft_strchr(temp, '\n');
		temp2 = *return_result;
		*return_result = ft_strjoin(*return_result, temp);
		free(temp);
		free(temp2);
		return (1);
	}
	else
	{
		temp = *return_result;
		*return_result = ft_strjoin(*return_result, in);
		free(temp);
		ft_zero(in, BUFF_SIZE);
		return (0);
	}
}

int		get_next_line(const int fd, char **line)
{
	static char	*size[MAX_FD];
	int			ret;

	if (BUFF_SIZE <= 0 || !line || fd < 0)
		return (-1);
	if (!size[fd])
		size[fd] = ft_strnew(BUFF_SIZE);
	*line = ft_strnew(0);
	if (*size[fd])
		{
			if (ft_verify(size[fd], line))
			return (1);
		}
	ft_zero(size[fd], BUFF_SIZE);
	while ((ret = read(fd, size[fd], BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
	}
	**line == 0
	return (0);
}
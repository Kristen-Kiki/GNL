/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:41:33 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/08/14 08:34:02 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(sc + i) == (char)c)
			return ((void *)sc + i);
	return (NULL);
}
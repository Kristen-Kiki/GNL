/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:26:15 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/07/17 15:25:23 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i = 0;
	unsigned char *ptr = (unsigned char*)dst;
	unsigned char *str = (unsigned char*)src;

	while (i < n)
	{
		ptr[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (&ptr[i + 1]);
		i++;
	}
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:33:38 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/07/17 15:26:21 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i = 0;
	unsigned char *d = (unsigned char*)dst;
	unsigned char *s = (unsigned char*)src;
	if (s < d)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			if (dst == '\0' && src == '\0')
				break ;
			d[i] = s[i];
			i++;
		}

	}
	return (dst);
}
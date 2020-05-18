/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:21:01 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/07/18 14:28:29 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i = ft_strlen(dst);
	size_t j = ft_strlen(src);
	size_t n = dstsize - i - 1;
	size_t x = 0;
	while (n--)
	{
		dst[i + x] = src[x];
		x++;
	}
	dst[i + x] = '\0';
	return (i + j );
}
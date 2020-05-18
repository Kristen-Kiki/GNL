/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:05:45 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/07/18 14:36:55 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i = 0;
	char *ptr = (char*)dst;
	char *str = (char*)src;
	
	if (ptr == '\0' && str == '\0')
		return (dst);
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (dst);
}
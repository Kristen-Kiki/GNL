/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 07:19:28 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/09/19 07:20:01 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*point;
	size_t			count;

	point = (unsigned char*)size;
	count = 0;
	if (!(point = (void*)malloc(sizeof(point) * size)))
		return (NULL);
	while (count < size)
	{
		point[count] = 0;
		count++;
	}
	return (point);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:59:51 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/07/17 14:59:02 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;
	unsigned char *str1 = (unsigned char *)s1;
	unsigned char *str2 = (unsigned char *)s2;
	if (i == n)
		return (0);
	while (str1[i] < str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
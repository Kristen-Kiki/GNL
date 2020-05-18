/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 07:50:54 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/09/19 07:51:16 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (!(ptr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

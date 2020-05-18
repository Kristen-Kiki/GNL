/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 00:44:04 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/08/14 00:44:13 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *word, size_t n)
{
	size_t len;

	if (*word == '\0')
		return ((char *)s);
	len = ft_strlen(word);
	while (*s && n-- >= len)
	{
		if (*s == *word && ft_memcmp(s, word, len) == 0)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
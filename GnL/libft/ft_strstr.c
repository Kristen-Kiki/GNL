/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 00:43:38 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/08/14 00:43:53 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *string, const char *word)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (word[a] == '\0')
		return (char *)&string[a];
	while (string[a] != '\0')
	{
		while (string[a + b] == word[b] && word[b])
			b++;
		if (word[b] == '\0')
			return (char *)&string[a];
		b = 0;
		a++;
	}
	return (NULL);
}
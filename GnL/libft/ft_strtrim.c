/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:40:41 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/07/04 17:42:28 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	count;
	size_t	i;
	char	*temp;

	i = 0;
	len = 0;
	if (!s)
		return (NULL);
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		len++;
		if (s[len] == '\0')
			return (ft_strdup(""));
	}
	count = len;
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	if (!(temp = ft_strnew(len - count + 1)))
		return (NULL);
	while (count < len + 1)
		temp[i++] = s[count++];
	temp[i] = '\0';
	return (temp);
}

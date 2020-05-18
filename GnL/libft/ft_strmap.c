/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 07:31:45 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/09/19 07:32:01 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*new_str;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	new_str = malloc(len * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = f(s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

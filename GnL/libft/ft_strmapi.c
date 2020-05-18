/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:32:12 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/09/19 07:32:25 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ui;
	size_t			len;
	char			*str;

	if (!s)
		return (NULL);
	ui = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * len + 1);
	if (!str)
		return (NULL);
	while (s[ui])
	{
		str[ui] = f(ui, s[ui]);
		ui += 1;
	}
	str[ui] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/7 07:32:36 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/09/19 07:32:53 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		count;

	count = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (str[count] != '\0')
	{
		str[count] = 0;
		count++;
	}
	return (str);
}

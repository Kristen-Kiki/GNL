/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 00:44:25 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/08/14 00:44:34 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;
	int				count;

	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	count = 0;
	while (us1[count] != '\0' && us2[count] != '\0')
	{
		if (us1[count] != us2[count])
		{
			if (us1[count] > us2[count])
				return (1);
			return (-1);
		}
		count++;
	}
	if (s1[count])
		return (1);
	if (s2[count])
		return (-1);
	return (0);
}
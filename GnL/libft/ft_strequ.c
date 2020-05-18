/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 07:50:02 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/09/19 07:50:19 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t count;

	count = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[count] && s2[count])
	{
		if (s1[count] != s2[count])
			return (0);
		count++;
	}
	if (s1[count] || s2[count])
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:50:33 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/09/19 07:50:47 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t count;

	count = 0;
	if (!s1 || !s2)
		return (0);
	while (count < n)
	{
		if (s1[count] != s2[count])
			return (0);
		count++;
	}
	return (1);
}

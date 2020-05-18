/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:18:49 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/07/05 09:14:21 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_length(int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	if (c < 0)
		c = 1;
	while (c)
	{
		i++;
		c /= 10;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:31:09 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/09/19 07:36:11 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s && f)
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i += 1;
		}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 16:28:31 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/07/17 15:26:56 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *c;
	
	c = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (c)
		ft_strcpy(c, s1);
	return (c);
}
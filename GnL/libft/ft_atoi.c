/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmcgrego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 00:47:32 by kmcgrego          #+#    #+#             */
/*   Updated: 2019/08/14 00:47:37 by kmcgrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 0;
	num = 0;
	while ((str[i] == '\0' || (str[i] == '\f') || (str[i] == '\v') ||
				(str[i] == '\r') || (str[i] == '\t') || (str[i] == '\n') ||
				(str[i] == ' ')))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num *= 10;
		num += (int)str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}
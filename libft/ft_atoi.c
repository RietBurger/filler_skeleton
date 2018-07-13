/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:28:31 by rburger           #+#    #+#             */
/*   Updated: 2017/07/17 15:43:28 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAX (2147483647)
#define MIN (-2147483648)

int		ft_atoi(const char *str)
{
	long i;
	long sign;
	long len;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = i;
	if (str[i] == '+' || str[i] == '-')
		i++;
	len = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		len = (len * 10) + (str[i] - '0');
		i++;
	}
	if (str[sign] == '-')
		return (-len);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:51:20 by rburger           #+#    #+#             */
/*   Updated: 2017/07/15 10:53:29 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)(s1 - 1);
	str2 = (unsigned char *)(s2 - 1);
	while ((--n) + 1 && *(++str) == *(++str2) && *str && *str2)
		;
	return (*str - *str2);
}

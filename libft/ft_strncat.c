/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:00:03 by rburger           #+#    #+#             */
/*   Updated: 2017/07/14 10:07:30 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;
	char	*str2;

	str = (char *)s1;
	str2 = (char *)s2;
	while (*str)
		str++;
	while (*str2 && n--)
	{
		*str++ = *str2++;
	}
	*str = '\0';
	return (s1);
}

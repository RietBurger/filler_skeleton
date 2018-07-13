/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 08:54:45 by rburger           #+#    #+#             */
/*   Updated: 2017/07/14 10:12:14 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	char *str;

	str = (char *)s1;
	while (*str && *str != c)
		str++;
	if (*str == c)
		return (str);
	else
		return (NULL);
}

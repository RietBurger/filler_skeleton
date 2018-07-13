/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 17:06:35 by rburger           #+#    #+#             */
/*   Updated: 2017/06/07 16:10:52 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	i = (unsigned char)c;
	while (n--)
	{
		if ((*d++ = *s++) == i)
			return (d);
	}
	return (0);
}

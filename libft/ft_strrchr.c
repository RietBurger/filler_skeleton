/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 11:23:48 by rburger           #+#    #+#             */
/*   Updated: 2017/07/14 10:33:09 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	int i;
	int len;
	int last;

	i = 0;
	last = 0;
	len = ft_strlen((char *)s1);
	if ((c > 255) || (c < 0))
		return (0);
	while (i < len)
	{
		if (s1[i] == c)
			last = i;
		i++;
	}
	if (s1[last] == c)
		return ((char*)(s1 + last));
	if (c == '\0')
		return ((char *)(s1 + len));
	return (NULL);
}

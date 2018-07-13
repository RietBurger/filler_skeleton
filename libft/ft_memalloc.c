/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 16:04:33 by rburger           #+#    #+#             */
/*   Updated: 2017/07/14 15:27:50 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*len;

	len = (unsigned char *)malloc(sizeof(char) * size);
	if (len == NULL)
		return (NULL);
	return (ft_memset(len, 0, size));
}

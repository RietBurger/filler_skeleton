/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:11:00 by rburger           #+#    #+#             */
/*   Updated: 2017/07/15 18:26:13 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	size_t	end;
	char	*cpy;

	if (s == NULL)
		return (NULL);
	cpy = ft_strnew(ft_strlen(s));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	end = 0;
	if (ft_iswhtspc(s[i]) ? 1 : 0)
		i++;
	while (i < (ft_strlen(s)))
	{
		if (!end && ft_iswhtspc(s[i]))
			i++;
		else
			cpy[end++] = s[i++];
	}
	while (ft_iswhtspc(cpy[--end]))
		cpy[end] = '\0';
	return (cpy);
}

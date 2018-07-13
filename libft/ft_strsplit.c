/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 17:37:05 by rburger           #+#    #+#             */
/*   Updated: 2017/09/12 10:29:14 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strcspn(const char *str, char chars)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == chars && str[i + 1] != chars)
			count++;
		i++;
	}
	if (str[0] != '\0')
		count++;
	return (count);
}

static char		*get_words(char const *str, char c, int *i)
{
	int		k;
	char	*s;

	k = 0;
	s = (char *)malloc(sizeof(s) * (ft_strlen((char *)str)));
	if (!s)
		return (NULL);
	while (str[*i] && str[*i] != c)
	{
		s[k] = str[*i];
		k++;
		*i = *i + 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i = *i + 1;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		wp;
	char	**out;

	i = 0;
	j = 0;
	wp = ft_strcspn(s, c);
	out = (char **)malloc(sizeof(out) * (wp + 2));
	if (!s)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < wp && s[i])
	{
		out[j] = get_words(s, c, &i);
		j++;
	}
	out[j] = NULL;
	return (out);
}

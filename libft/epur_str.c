/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:10:16 by rburger           #+#    #+#             */
/*   Updated: 2017/09/12 10:15:51 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] >= 33 && str[i] <= 126)
		{
			ft_putchar(str[i]);
			i++;
		}
		while (str[i] == '\t' || str[i] == ' ')
			i++;
		if ((str[i] != '\t' || str[i] != ' ') && str[i] != '\0')
			ft_putchar(' ');
	}
	return (0);
}

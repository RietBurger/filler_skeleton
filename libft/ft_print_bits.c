/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:30:26 by rburger           #+#    #+#             */
/*   Updated: 2017/08/31 16:30:35 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_bits(char octet)
{
	char	bits[8];
	int		nb;
	int		count;
	char	z;

	nb = atoi(&octet);
	count = 0;
	while (count < 8)
	{
		bits[count] = nb % 2;
		nb /= 2;
		count++;
	}
	while (count - 1 >= 0)
	{
		z = bits[count - 1] + 48;
		count--;
		ft_putchar_fd(z, 0);
	}
}

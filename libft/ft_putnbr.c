/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:49:56 by rburger           #+#    #+#             */
/*   Updated: 2017/11/20 09:22:50 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAX (2147483647)
#define MIN (-2147483648)

void	ft_putnbr(int n)
{
	if (n > MAX || n < MIN)
		return ;
	if (n == MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n <= 9)
	{
		ft_putchar(n + 48);
		return ;
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:15:25 by jfilipa-          #+#    #+#             */
/*   Updated: 2024/01/19 20:54:46 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int i)
{
	char	c;

	if (n == -2147483648)
	{
		i += write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		n = -n;
		i += write(1, "-", 1);
		i = ft_putnbr(n, i);
	}
	else if (n < 10)
	{
		c = n + '0';
		i += write(1, &c, 1);
	}
	else
	{
		i = ft_putnbr(n / 10, i);
		i = ft_putnbr(n % 10, i);
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:16:54 by jfilipa-          #+#    #+#             */
/*   Updated: 2024/01/29 19:02:50 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long int n, int i, char c)
{
	if (n < 16)
	{
		if (c == 'X')
			i += write(1, &HEXA_UP[n], 1);
		else
			i += write(1, &HEXA_LOW[n], 1);
	}
	else
	{
		i = ft_print_hex(n / 16, i, c);
		i = ft_print_hex(n % 16, i, c);
	}
	return (i);
}

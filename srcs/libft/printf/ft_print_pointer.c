/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:23:06 by jfilipa-          #+#    #+#             */
/*   Updated: 2024/01/29 19:03:04 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long int n)
{
	int	i;

	i = 0;
	if (!n)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i += ft_print_hex(n, 0, 'x');
	}
	return (i);
}

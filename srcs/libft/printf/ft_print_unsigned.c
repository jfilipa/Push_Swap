/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:18:38 by jfilipa-          #+#    #+#             */
/*   Updated: 2024/01/19 20:54:38 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n, int i, char *str)
{
	if (n < 10)
	{
		i += write(1, &str[n], 1);
	}
	else
	{
		i = ft_print_unsigned(n / 10, i, str);
		i = ft_print_unsigned(n % 10, i, str);
	}
	return (i);
}

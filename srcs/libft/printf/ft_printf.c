/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:06:23 by jfilipa-          #+#    #+#             */
/*   Updated: 2024/04/28 15:31:38 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (c == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (c == 'p')
		count += ft_print_pointer((long unsigned int)va_arg(args, long int));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int), 0);
	else if (c == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int), 0, DECIMAL);
	else if (c == 'x' || c == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), 0, c);
	else if (c == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	if (str == NULL)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_parse(str[i], args);
		}
		else
		{
			count += ft_print_char(str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}

/* int main(void)
{
	ft_printf("Hello World!\n");
	ft_printf("Hello %s!\n", "World");
	ft_printf("Hello %c!\n", 'W');
	ft_printf("Hello %d!\n", 42);
	ft_printf("Hello %i!\n", 42);
	ft_printf("Hello %x!\n", 42);
	ft_printf("Hello %X!\n", 42);
	ft_printf("%u!\n", 42);
	ft_printf("%p\n", 42);
	ft_printf("Hello %%!\n");
	return (0);
} */

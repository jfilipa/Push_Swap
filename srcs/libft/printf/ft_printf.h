/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:47:29 by jfilipa-          #+#    #+#             */
/*   Updated: 2024/01/29 19:03:40 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# define HEXA_UP "0123456789ABCDEF"
# define HEXA_LOW "0123456789abcdef"
# define DECIMAL "0123456789"

int	ft_parse(const char c, va_list args);
int	ft_printf(const char *str, ...);
int	ft_print_char(char a);
int	ft_print_str(char *str);
int	ft_putnbr(int n, int i);
int	ft_print_hex(unsigned long int n, int i, char c);
int	ft_print_unsigned(unsigned int n, int i, char *str);
int	ft_print_pointer(unsigned long int n);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:30:21 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:52:06 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/* int main(void)
{
	char    digit = '2';
	char    digit1 = 'A';

	printf("%d\n", ft_isdigit(digit));
	printf("%d\n", ft_isdigit(digit1));
	return (0);
} */
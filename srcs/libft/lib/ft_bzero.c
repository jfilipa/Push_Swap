/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:34:51 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:50:57 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = s;
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
}

/* int main(void)
{
	char    buffer[10] = "Joana";

	printf("Before bzero: %s\n", buffer);

	ft_bzero(buffer, 10);

	printf("After bzero: %s\n", buffer);
	return (0);
} */
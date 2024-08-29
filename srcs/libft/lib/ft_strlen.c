/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:42:55 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:55:45 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* int main(void)
{
    char str[] = "Joana";
    char str1[] = "Joanafilipa";

    printf("%zu\n", ft_strlen(str));
    printf("%zu\n", ft_strlen(str1));
    return(0);
} */
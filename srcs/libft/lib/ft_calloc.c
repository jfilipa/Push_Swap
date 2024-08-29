/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:32:08 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:51:10 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}
/* int main(void)
{
	char    *arr;
	int i;

	i = 0;
	arr = ft_calloc(1000000, 1);
	if(arr == NULL)
	{
		printf("Memory allocation failed\n");
		return(1);
	}
	while(i < 1000000)
	{
		if(arr[i] != 0)
		{
			printf("Memory allocation failed\n");
			free(arr);
			return(1);
		}
		i++;
	}
	printf("Memory allocation was successful\n");
	free(arr);
	return(0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:33:49 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:56:41 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (len--)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* int main(void)
{
	char *original = "JoanaFilipa";
	unsigned int start = 5;
	size_t len = 10;

	char *substring = ft_substr(original, start, len);

	if (substring == NULL || (start > ft_strlen(original)))
	printf("Memory allocation error or invalid parameters.\n");
	else
	{
		printf("Substring: %s\n", substring);
		free(substring);
	}
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:33:13 by jfilipa-          #+#    #+#             */
/*   Updated: 2024/08/20 01:09:31 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			total++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (total);
}

static char	*word_aloc(const char *str, char c)
{
	char	*word;
	int		word_len;
	int		i;

	i = -1;
	word_len = 0;
	while (str[word_len] && str[word_len] != c)
		word_len++;
	word = (char *)malloc(word_len + 1);
	if (!word)
		return (NULL);
	while (++i < word_len)
		word[i] = str[i];
	word[i] = '\0';
	return (word);
}

static	void	*free_str(char **out, int i)
{
	while (i >= 0)
		free(out[i--]);
	free(out);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;

	i = 0;
	out = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			out[i] = word_aloc(s, c);
			if (!out[i++])
				return (free_str(out, i + 1));
		}
		while (*s && *s != c)
			s++;
	}
	out[i] = 0;
	return (out);
}

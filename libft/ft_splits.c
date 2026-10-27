/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimon-s@student.42barcelona.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:09:14 by gsimon-s          #+#    #+#             */
/*   Updated: 2026/10/27 13:29:53 by gsimon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static void	free_all(char **arr, size_t n)
{
	while (n > 0)
	{
		n--;
		free(arr[n]);
	}
	free(arr);
}

static int	fill_words(char **arr, char const *s, char c, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		arr[i] = ft_substr(s, 0, word_len(s, c));
		if (arr[i] == NULL)
		{
			free_all(arr, i);
			return (0);
		}
		s += word_len(s, c);
		i++;
	}
	arr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	if (fill_words(arr, s, c, words) == 0)
		return (NULL);
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 12:22:33 by mandress          #+#    #+#             */
/*   Updated: 2021/11/23 14:24:59 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	ischar;
	int	words;

	ischar = 0;
	words = 0;
	while (*s)
	{
		if (*s != c && ischar == 0)
		{
			ischar = 1;
			words++;
		}
		else if (*s == c)
			ischar = 0;
		s++;
	}
	return (words);
}

int	ft_words_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			return (i);
		if (*s != c || *s != '\0')
			i++;
		s++;
	}
	return (i);
}

static char	**ft_words_alloc(const char *s, char c, char **split, int words)
{
	char	**aux;
	int		word;

	aux = split;
	word = 0;
	while (words)
	{
		if (*s == c)
			s++;
		if (*s != c)
		{
			word = ft_words_len(s, c);
			*split = ft_substr(s, 0, word);
			s = s + word;
			split++;
			words--;
		}
		s++;
	}
	*split = 0;
	return (aux);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	char	**split;

	if (!s)
		return (0);
	words = ft_count_words(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (0);
	split = ft_words_alloc(s, c, split, words);
	if (!split)
		return (0);
	return (split);
}

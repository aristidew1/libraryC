/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arvella <arvella@student.42perpignan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:19:21 by arvella           #+#    #+#             */
/*   Updated: 2025/11/05 12:47:46 by arvella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!s[i])
		return (0);
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_tab(char **splited, int index)
{
	while (index >= 0)
		free(splited[index--]);
	free(splited);
}

static char	**fill_split(char const *s, char **splited, char c)
{
	int	i;
	int	k;
	int	len;

	k = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = word_len(s + i, c);
		splited[k] = ft_substr(s, i, len);
		if (!splited[k])
		{
			free_tab(splited, k - 1);
			return (NULL);
		}
		k++;
		i += len;
	}
	splited[k] = NULL;
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;

	if (!s)
		return (NULL);
	splited = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!splited)
		return (NULL);
	splited = fill_split(s, splited, c);
	return (splited);
}

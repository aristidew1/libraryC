/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arvella <arvella@student.42perpignan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:19:21 by arvella           #+#    #+#             */
/*   Updated: 2025/11/04 18:38:18 by arvella          ###   ########.fr       */
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

static int word_len(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
static void	free_tab(char **splited, int index)
{
	int	i;

	i = 0;
	while (index)
		free(splited[index--]);
	free(splited);
}

char    **ft_split(char const *s, char c)
{
	char	**splited;
	int		i;
	int		j;
	int		k;

	splited = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!splited)
		return (NULL);
	k = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		splited[k] = malloc(sizeof(char) * word_len((char *)&s[i], c));
		if (!splited[k])
		{
			free_tab(splited, k - 1);
			return (NULL);
		}
		j = 0;
		while (s[i] && s[i] != c )
			splited[k][j++] = s[i++];
		splited[k++][j] = '\0';
	}
	splited[k] = NULL;
	return (splited);
}


#include <stdio.h>
int main ()
{
	int i = 0;
	char **splited = ft_split ("bonjour la moulinette  ", ' ');
	while (splited[i])
		printf("%s\n", splited[i++]);
	i = 0;
	free_tab(splited, 3);
}

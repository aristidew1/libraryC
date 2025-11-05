/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arvella <arvella@student.42perpignan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:32:08 by arvella           #+#    #+#             */
/*   Updated: 2025/11/05 11:44:51 by arvella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	check(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

static size_t	count(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	res;

	i = 0;
	while (check(s[i], set))
		i++;
	k = ft_strlen(s) - 1;
	j = 0;
	while (check(s[k], set))
	{
		j++;
		k--;
	}
	res = ft_strlen(s) - i - j;
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	char	*p;
	int		i;
	int		len;

	if (!s1 || !set)
		return (NULL);
	len = count(s1, set);
	if (len <= 0)
	{
		new = malloc(sizeof(char));
		new[0] = '\0';
		return (new);
	}
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (check(s1[i], set))
		i++;
	p = new;
	while (len--)
		*p++ = s1[i++];
	*p = '\0';
	return (new);
}

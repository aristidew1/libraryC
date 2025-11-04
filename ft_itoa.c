/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arvella <arvella@student.42perpignan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:33:45 by arvella           #+#    #+#             */
/*   Updated: 2025/11/04 17:19:03 by arvella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	count_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*rev_tab(char *s)
{
	int		min;
	int		max;
	char	tmp;

	min = 0;
	max = ft_strlen(s) - 1;
	if (s[0] == '-')
		min++;
	while (min < max)
	{
		tmp = s[min];
		s[min++] = s[max];
		s[max--] = tmp;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*buf;
	long	nb;
	int		i;

	nb = n;
	buf = malloc(sizeof(char) * (count_len(nb) + 1));
	if (!buf)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		buf[0] = '-';
		i++;
	}
	while (nb > 0)
	{
		buf[i++] = nb % 10 + '0';
		nb /= 10;
	}
	buf[i] = '\0';
	buf = rev_tab(buf);
	return (buf);
}

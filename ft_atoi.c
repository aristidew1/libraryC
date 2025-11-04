/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arvella <arvella@student.42perpignan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:33:08 by arvella           #+#    #+#             */
/*   Updated: 2025/11/04 13:13:58 by arvella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v' || *nptr == '\f'
		|| *nptr == '\r' || *nptr == ' ')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sign = -sign;
	while (*nptr >= '0' && *nptr <= '9')
		res = res * 10 + *nptr++ - '0';
	return (res * sign);
}

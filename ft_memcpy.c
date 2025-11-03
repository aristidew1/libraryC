/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arvella <arvella@student.42perpignan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:22:24 by arvella           #+#    #+#             */
/*   Updated: 2025/11/03 16:40:21 by arvella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *p;
	unsigned char *s;

	p = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*p++ = *s++;
	return (dest);
}

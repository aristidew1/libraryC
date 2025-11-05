/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arvella <arvella@student.42perpignan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:58:04 by arvella           #+#    #+#             */
/*   Updated: 2025/11/05 16:54:52 by arvella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			len;
	unsigned char	*tmp;

	len = nmemb * size;
	if (len != 0)
		if (len / nmemb != size && len != 0)
			return (NULL);
	if (nmemb == 0 || size == 0)
	{
		tmp = malloc(1);
		if (!tmp)
			return (NULL);
		tmp[0] = 0;
		return (tmp);
	}
	tmp = malloc(len);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < len)
		tmp[i++] = 0;
	return (tmp);
}

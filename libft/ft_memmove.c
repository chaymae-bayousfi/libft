/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:04:49 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/19 17:58:44 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	affect(size_t len, unsigned char *dest, const unsigned char *sourc)
{
	while (len > 0)
	{
		dest[len - 1] = sourc[len - 1];
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*sourc;
	size_t				i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	sourc = (const unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dest > sourc)
	{
		affect(len, dest, sourc);
	}
	else if (dest < sourc)
	{
		while (i < len)
		{
			dest[i] = sourc[i];
			i++;
		}
	}
	else
		return (dst);
	return (dst);
}

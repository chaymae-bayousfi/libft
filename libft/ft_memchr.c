/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:18:58 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/20 13:34:00 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		x;
	size_t				i;
	const unsigned char	*str;

	x = (unsigned char)c;
	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == x)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

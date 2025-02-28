/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:34:19 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/20 14:00:09 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		k;
	size_t		max_copy;
	size_t		len_dst;
	size_t		len_src;

	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	k = 0;
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	max_copy = dstsize - len_dst - 1;
	while (k < max_copy && src[k] != '\0')
	{
		dst[len_dst + k] = src[k];
		k++;
	}
	dst[len_dst + k] = '\0';
	return (len_dst + len_src);
}

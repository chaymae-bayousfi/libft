/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:02:20 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/16 11:53:15 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*l;

	s = (unsigned char *)s1;
	l = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s[i] == l[i] && i < n)
	{
		if (s[i] == '\0' || l[i] == '\0')
			return (0);
		i++;
	}
	if (i < n)
		return (s[i] - l[i]);
	return (0);
}

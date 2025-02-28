/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:12:03 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/14 15:18:56 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && find_trim(set, s1[i]))
		i++;
	while (j > i && find_trim(set, s1[j - 1]))
		j--;
	str = (char *)malloc((j - i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}

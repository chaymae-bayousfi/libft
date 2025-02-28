/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:50:11 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/16 15:31:34 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s1, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = s1[i];
		i++;
	}
	str[n] = '\0';
	return (str);
}

static void	ft_free(char **t, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(t[i]);
		i++;
	}
	free(t);
}

static char	**ajout(char const *s, char c, char **tab)
{
	int	i;
	int	d;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		d = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		tab[k] = ft_strndup(s + d, i - d);
		if (tab[k] == NULL)
		{
			ft_free(tab, k);
			return (NULL);
		}
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	return (ajout(s, c, tab));
}

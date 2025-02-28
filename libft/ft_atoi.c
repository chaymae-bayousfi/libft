/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:10:21 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/20 16:45:51 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int s)
{
	if (s == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	c;
	int		signe;
	long	tmp;

	i = 0;
	c = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = c;
		c = c * 10 + (str[i] - '0');
		if (c / 10 != tmp)
			return (check(signe));
		i++;
	}
	return ((int)(signe * c));
}

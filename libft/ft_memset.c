/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:21:53 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/21 18:09:31 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	k;

	str = (unsigned char *)b;
	k = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = k;
		i++;
	}
	return (b);
}
//100 11010010
#include <stdio.h>

int main()
{
	int s[]={1,2,3,4};
	void *p=&s[1];
	ft_memset(p,0b00000100,2);
	ft_memset(p,0b11010010,1);
	printf("%d",s[0]);
}
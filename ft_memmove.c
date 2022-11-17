/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:05 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:35:33 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	dif;

	dif = (((char *)dst) - ((char *)src));
	if (dif >= len)
		ft_memcpy(dst, (void *)src, len);
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return ((char *)dst);
}
/*
// copies len bytes from src to dst. 
// similar to memcpy thing that changes here is that if overlap of addresses, 
// does it backwards
#include <stdio.h>
int main()
{
	char h[20] = "nicol";
	ft_memmove(&h[2], h, 3);

	int i = 0;
	while (i < sizeof(h))
	{
		printf("-%c-", h[i]);
		i++;
	}
}*/
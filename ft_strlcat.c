/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:28 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:27:12 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	total;
	size_t	size_dst;

	size_dst = ft_strlen(dst);
	total = ft_strlen((char *)src) + size_dst;
	len = dstsize - size_dst;
	if (dstsize == 0)
		return (ft_strlen((char *)src));
	if (size_dst > dstsize)
		return (ft_strlen((char *)src) + dstsize);
	i = 0;
	while (i < len - 1)
	{
		dst[size_dst++] = src[i];
		i++;
	}
	dst[size_dst] = 0;
	return (total);
}
/*
// appends dstsize values of src at the end of dst - 
#include <stdio.h>
#include <string.h>
int main()
{
	char src[10] = "nicol";
	//char dst[10] = "hola";

	printf("%zu", ft_strlcat(src,&src[2],1));

	int i = 0;
	while(src[i])
	{
		printf("%c", src[i]);
		i++;
	}

	printf("%lu", sizeof(src));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:34 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:23:17 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (src[i])
		i++;
	len = i;
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}
/*
// copies src into dst until dstsize passed. returns len of src
#include <string.h>
#include <stdio.h>
// for why the -1 in the loop, check rules in the man 
int main()
{
	char src[10] = "nicolas";
	char dst[10] = "hol";
	//size_t size = sizeof(src);

	//printf("%zu\n",ft_strlcpy(dst,src,5));
	printf("-%zu-",strlcpy(dst,src,5));

	int i = 0;
	while(dst[i])
	{
		printf(":%c:", dst[i]);
		i++;
	}
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:22:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:38:17 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	unsigned char		chr;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == c)
			return (str);
		i++;
		str++;
	}
	return (0);
}
/*
// finds first ocurrence of c into s for n bytes and return pointer to it
#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "nicolas";
	char c = 'c';
	printf("%p\n",ft_memchr(s,c,15));
	printf("%p\n",memchr(s,c,15));
	printf("%p\n",&s[2]);
}*/
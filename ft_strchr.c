/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:18 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/29 21:11:57 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char		cast_c;

	cast_c = (unsigned char)c;
	if (!c && c != 0)
		return ((char *)s);
	while (*s)
	{
		if (*s == cast_c)
			return ((char *)s);
		s++;
	}
	if(*s == 0)
		return ((char*)s);
	return (0);
}
/*
// locates fist occurence of c into s and returns pointer to it
#include <stdio.h>
#include <string.h>
int main()
{
	
	//char s[] = "nicolas";
	//char c = 0;
	//printf("%p\n", ft_strchr(s,c));
	//printf("%p", &s[4]);
	
	//char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	//ft_strchr(s, 't' + 256);
	char s[] = "tripouille";
	//char *d1 = ft_strchr(s, 'l');
	//char *d2 = strchr(s, 0);
	//printf("this is normal , this is ft_ %p",d2);
	int i = 0;
	while(s[i])
		printf("adress %p\n", &s[i++]);
	//printf("%p", &s[7]);
	
}
*/
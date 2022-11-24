/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:18 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/24 21:39:15 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	int			len;
	char		*cast_s;

	cast_s = (char *)s;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == c)
			return (&cast_s[i]);
		i++;
	}
	return (0);
}
/*
// locates fist occurence of c into s and returns pointer to it
#include <stdio.h>
#include <string.h>
int main()
{
	
	char s[] = "nicolas";
	char c = 0;
	printf("%p\n", ft_strchr(s,c));
	printf("%p", &s[4]);
	
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strchr(src, '\0');
	char *d2 = ft_strchr(src, '\0');
	printf("this is normal %p, this is ft_ %p", d1,d2);
}
*/

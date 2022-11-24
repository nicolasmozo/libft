/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:56 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/24 21:30:42 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*cast_s;

	cast_s = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (&cast_s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
// finds last occurrence of arg passed in the string. returns address of it. 
// can also locate '\0'
#include <string.h>
int main()

	
	char *src = "\0";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');
	//char c = 'B';
	//printf("%p\n", ft_strrchr(s,c));
	//printf("%p\n", strrchr(s,c));
	printf("norma is %p , ft_ is %p", d1,d2);
	
	char src [10];//= electric_alloc(10);

	
	strcpy(src, "123456789");
	printf("%p",ft_strrchr(src, 'a'));
	//src = electric_alloc_rev(10);
	strcpy(src, "123456789");
	printf("%p",ft_strrchr(src, 'a'));
}
*/
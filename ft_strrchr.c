/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:56 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:18:45 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*cast_s;

	cast_s = (char *)s;
	i = 0;
	while (s[i])
		i++;
	while (s[i] + 1)
	{
		if (s[i] == c)
			return (&cast_s[i]);
			i--;
	}
	return (0);
}
/*
// finds last occurrence of arg passed in the string. returns address of it. 
// can also locate '\0'
#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "nioocolas";
	char c = 'o';
	printf("%p\n", ft_strrchr(s,c));
	printf("%p", &s[5]);
}*/
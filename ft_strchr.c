/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:18 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:28:18 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int			i;
	char		*cast_s;

	cast_s = (char *)s;
	i = 0;
	while (s[i] + 1)
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
}*/
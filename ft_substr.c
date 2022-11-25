/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:06:17 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/25 20:56:08 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	len_str;
	unsigned int	i;

	if (!s)
		return (0);
	len_str = ft_strlen (s);
	if (len_str < start)
	{
		sub = malloc(sizeof(char));
		sub[0] = 0;
		return (sub);
	}
	sub = malloc((len + 1) * sizeof(char));
	if (!(sub))
		return (0);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
/*
#include <stdio.h>
// gets a subsstring of s from start to len bytes
#include <stdlib.h>
#include <string.h>

int main()
{
	
	char str[] = "i just want this part #############";
	size_t size = 20;

	char *ret = ft_substr(str, 5, size);
	printf("%d", ft_strlen(ret));
	str[size + 5] = 0;
	if (!memcmp(ret, str + 5, size + 1))
	{
		free(ret);
		return printf("%s", "sucess");
	}
	free(ret);
	return printf("%s", "wrong");
}
*/
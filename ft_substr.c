/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:06:17 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/27 14:00:04 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	len_dst;
	unsigned int	i;

	len_dst = len;
	if (len < start)
	{
		sub = malloc(sizeof(char));
		sub[0] = 0;
		return (sub);
	}
	if (len > (size_t)ft_strlen(s))
		len_dst = ft_strlen(&s[start]);
	sub = malloc((len_dst + 1) * sizeof(char));
	if (!(sub))
		return (0);
	i = 0;
	while (i < len_dst && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
/*
// gets a subsstring of s from start to len bytes
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = strdup("0123456789");
	printf("%s", ft_substr(str, 9, 10));
}
*/
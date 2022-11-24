/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:06:17 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/23 19:30:53 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*sub;

	if (s[0] == 0)
		return ((char *)s);
	sub = malloc (ft_strlen (&s[start]) * sizeof(char));
	if (!(sub))
		return (0);
	return (ft_memcpy(sub, (void *)&s[start], len));
}
/*
// gets a subsstring of s from start to len bytes
#include <stdio.h>
int main()
{
	char uno[] = "nicolas";
	printf("%s", ft_substr(uno, 2,2));
	
}
*/

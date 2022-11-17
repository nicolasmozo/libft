/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:09:10 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:20:33 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i] || i < n) && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
// compares two strings and return the subtraction of the ascii numbers
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "nicolas";
	char s2[] = "nicolas";

	printf(":%d:\n", strncmp(s1,s2,7));
	printf("-%d-\n", ft_strncmp(s1,s2,7));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:53:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/27 14:07:57 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = malloc ((ft_strlen (s1) + ft_strlen (s2)) + 1 * sizeof(char));
	if (!(join))
		return (0);
	ft_memcpy (join, (void *)s1, ft_strlen (s1));
	ft_strlcat (&join[ft_strlen (s1)], s2, ft_strlen (s2) + 1);
	join[ft_strlen(join) + 1] = 0;
	return (join);
}
/*
// concatenates s1 with s2, returns concatenated str
#include <stdio.h>
int main()
{
	char uno[] = "nico";
	char dos[] = " las";
	printf("%s", ft_strjoin(uno,dos));
}
*/
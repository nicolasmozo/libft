/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:53:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/25 21:20:48 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		len_s1;
	int		total_size;

	total_size = ft_strlen (s1) + ft_strlen (s2);
	len_s1 = ft_strlen(s1);
	i = 0;
	join = malloc (total_size * sizeof(char));
	if (!join)
		return (0);
	ft_memcpy (join, (void *)s1, ft_strlen (s1));
	while (i < total_size)
	{
		join[len_s1 + i] = s2[i];
		i++;
	}
	join[i] = 0;
	return (join);
}
/*
#include <stdio.h>
// concatenates s1 with s2, returns concatenated str
int main()
{
	char uno[] = "nico";
	char dos[] = "las";
	ft_strjoin(uno,dos);
}
*/
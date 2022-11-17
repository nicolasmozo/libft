/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:00:50 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:50:49 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = ft_calloc (sizeof(char), ft_strlen (s1));
	if (!ptr)
		return (0);
	return (ft_memcpy (ptr, (void *) s1, ft_strlen (s1)));
}
/*
// takes a string, allocates data for another exact one and copies it. 
// Return pointer to copy
#include <stdio.h>
#include <string.h>
int main()
{
	char uno[] = "nicolas";    
	printf("%s with size %lu\n",ft_strdup(uno), sizeof(uno));
	printf("%s with size %lu\n",strdup(uno), sizeof(uno));
}*/
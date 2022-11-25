/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:00:50 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/25 19:16:18 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *) malloc(len * sizeof(char) + 1);
	if(!ptr)
		return (0);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
// takes a string, allocates data for another exact one and copies it. 
// Return pointer to copy
#include <stdio.h>
#include <string.h>
int main()
{
	//char uno[] = "lorem ipsum dolor sit amet";    
	//printf("%s with size %lu\n",ft_strdup(uno), sizeof(uno));
	//printf("%s with size %lu\n",strdup(uno), sizeof(uno));
	char *ptr;
	char *pt2;

	ptr = ft_strdup("lol");
	pt2 = strdup("lol");
	printf("%p\n", ptr);
	printf("%p\n", pt2);
	printf("%p\n", &pt2[0]);
	if(ptr == pt2)
		printf("%s", "worksss");
}
*/

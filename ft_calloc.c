/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:53:31 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:40:42 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc (count * size);
	if (!(ptr))
		return (0);
	ft_bzero (ptr, count * size);
	return (ptr);
}
/*
// allocates size * count bytes of memory returns a pointer to it
#include <stdio.h>
int main()
{   
	char *uno = ft_calloc(3,sizeof(char));
	char *dos = calloc(3,sizeof(char));
	printf("%p with size %lu\n", uno, sizeof(uno));
	printf("%p with size %lu\n", dos, sizeof(dos));

	while(*uno)
	{
		printf("%c", *uno);
		uno++;
	}
}*/
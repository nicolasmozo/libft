/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:39 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:20:55 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
// counts string
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	//const char s = av[1][0];
	printf("%d\n", ft_strlen(&av[1][0]));
	printf("%lu\n", strlen(&av[1][0]));
}*/
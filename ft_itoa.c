/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:15:35 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/26 02:31:53 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = count_digits(n);
	str = (malloc(sizeof(char) * (len + 1)));
	if (!str)
		return (0);
	str[len--] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while ((unsigned int) n > 0)
	{
		str[len--] = ((unsigned int)n % 10) + '0';
		n = (unsigned int) n / 10;
	}
	return (str);
}
/*
#include <stdio.h>
// receives an int and converts it into a char  (returns a pointer)
#include <math.h>
int main()
{   
	//int uno = 0;
	//char *str = ft_itoa(uno);
	//printf("%s with size %lu",str, sizeof(str));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}
*/
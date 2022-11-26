/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:15:35 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/20 14:01:07 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*get_aux(int n, int number_digits, int negative)
{
	int		i;
	char	*aux;

	aux = ft_calloc (number_digits, sizeof(char));
	if (!(aux))
		return (0);
	i = 0;
	if (negative == 1)
		n *= -1;
	while (n != 0)
	{
		aux[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (aux);
}

static char	*get_itoa(int number_digits, int negative, char *aux)
{
	int		i;
	char	*itoa;

	i = 0;
	itoa = malloc((number_digits + 1 + negative) * (sizeof(char)));
	if (!(itoa))
		return (0);
	number_digits--;
	while (number_digits >= 0)
	{
		if (negative == 1)
		{
			itoa[i] = '-';
			i++;
			negative = 0;
		}
		itoa[i] = aux[number_digits];
		i++;
		number_digits--;
	}
	itoa[i] = 0;
	return (itoa);
}

char	*ft_itoa(int n)
{
	int		negative;
	int		number_digits;
	char	*aux;
	char	*itoa;

	negative = 0;
	number_digits = count_digits(n);
	if (n < 0)
		negative = 1;
	if (n == 0)
		return ("0");
	if (n == 2147483647)
		return ("2147483647");
	if (n == -2147483648)
		return ("-2147483648");
	aux = get_aux(n, number_digits, negative);
	return (itoa = get_itoa (number_digits, negative, aux));
}
/*
// receives an int and converts it into a char  (returns a pointer)
#include <stdio.h>
#include <math.h>
int main()
{   
	int uno = 222;
	printf("%s",ft_itoa(uno));
}*/
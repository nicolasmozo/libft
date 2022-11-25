/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:32:14 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/25 18:53:29 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	negative;
	int	result;

	negative = 1;
	result = 0;
	if (!str)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		negative = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * negative);
}
/*
// finds ints within a string and returns the int 
// null if whetever before the int
#include <stdio.h>
#include <stdlib.h>
int main()
{	
	char *n = "\t\v\f\r\n \f-06050";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	printf("%d with size %lu\n",i1,sizeof(i1));
	printf("%d with size %lu\n",i2, sizeof(i2));
	if(i1 == i2)
		printf("%s","worksss");

	
	//char test[] = "  '+1a";
	//printf("-%d-\n", atoi(test));
	//printf("-%d-\n", ft_atoi(test));
}
*/

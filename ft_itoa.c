/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:15:35 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/19 22:15:20 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    char * ptr;
    int negative = 0;
    //char aux[];

    if(n < 0)
        negative = 1;
    if(n == ft_atoi(INT_MAX))
        return ptr = (char *)INT_MAX;
    if(n == ft_atoi(INT_MIN))
       return ptr = (char *)INT_MIN;
    
    return 0;
}
#include <stdio.h>
int main()
{   r
    int uno = ft_atoi(INT_MIN);
    
    printf("%s", ft_itoa(uno));
}
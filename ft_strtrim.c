/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:47:38 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/17 21:25:49 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int is_set(char const *s1, char const *set)
{
    if(*s1 == *set)
        return 1;
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *trim;
    char *prefix = 0;
    //set++;
    

    trim = malloc(ft_strlen(s1) * sizeof(char));
    if(!(trim))
        return 0;
    
    while(*s1)
    {
        if(is_set(*s1,set[i]) == 1)
            s1++;
        
    }
   
    
    printf("%p\n", prefix);
    return trim;
}

#include <stdio.h>
int main()
{
    char uno[] = "  + +holb ";
    char set[] = " +";
    //char const dos = 'p';
    //ft_strtrim(uno, "p");
    printf("\n:%s:",ft_strtrim(uno,set));
    printf("\n%p\n",&uno[0]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:35:03 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/11/29 22:59:05 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	unsigned int	i;
	unsigned int	count_words;

	i = 0;
	count_words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count_words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count_words);
}

static void	*ft_freeword(char **word, int k)
{
	while (word[k])
	{
		free(word[k]);
		word[k] = NULL;
		k--;
	}
	free(word);
	word = NULL;
	return (word);
}

static char	**ft_dup(char **new_str, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start >= ft_strlen(s))
			new_str[j++] = NULL;
		else
		{
			new_str[j++] = ft_substr(s, start, i - start);
			if (new_str[j - 1] == NULL)
				ft_freeword(new_str, j);
		}
	}
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char				**new_str;
	size_t				len;

	if ((char *)s == NULL)
		return (NULL);
	len = ft_count(((char *)s), c);
	new_str = malloc(sizeof(char *) * (len + 1));
	if (!new_str)
		return (0);
	new_str = ft_dup(new_str, s, c);
	new_str[len] = NULL;
	return (new_str);
}


#include <stdio.h>
#include "libft.h"

int main ()
{
    int i = 0;
    char **splited;
/*
    char *s = "Bonjour.. Je vais. fort. bien.. ce.soir. on fait.. la fete?..!.";
    char *s = "Tripouille";
*/
    char *s = "saluti-ddwffw ------   c--";
        

    printf("%s is %zu\n", s, ft_strlen(s));
    splited = ft_split(s, '-');
    while (i < 6)
    {
        printf("This is splited %d : %s\n", i, splited[i]);
        i++;
    }

    return (0);
}
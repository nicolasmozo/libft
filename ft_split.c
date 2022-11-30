/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:10:01 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/29 23:03:56 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_count(char *s, char c)
{
	int	word_count;
	int	i;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			word_count++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			word_count++;
		i++;
	}
	return (word_count);
}

static int	free_all(char **array, int fail_index)
{
	while (fail_index > 0)
	{
		fail_index--;
		free(array[fail_index]);
		array[fail_index] = 0;
	}
	free(array);
	return (0);
}

static int	add_word(char **array, int word_len, int start, char *s)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	array[i] = ft_substr(s, start, word_len);
	if (array[i] == 0)
	{
		free_all(array, i);
		array = 0;
		return (0);
	}
	return (1);
}

static int	fill_array(char **array, char *s, char c)
{
	int		i;
	int		word_len;
	int		start;

	i = 0;
	while (s[i])
	{
		word_len = 0;
		start = 0;
		if (s[i] != c)
			start = i;
		while (s[i] != c && s[i] != 0)
		{
			word_len++;
			i++;
		}
		if (word_len)
		{
			if (!add_word(array, word_len, start, s))
				return (0);
		}
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**array;

	array = 0;
	word_count = 0;
	if (s == 0)
		return (0);
	word_count = get_word_count((char *)s, c);
	array = (char **)ft_calloc(1, (word_count + 1) * sizeof(char *));
	if (array == 0)
		return (0);
	if (!fill_array(array, (char *)s, c))
		return (0);
	return (array);
}

/*
static int	count_words(char const *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			counter++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (counter);
}

static char	**get_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

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
		{
			split[j] = NULL;
			j++;
		}
		else
		{
			split[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		len;

	if (!s)
		return (0);
	len = count_words(s, c);
	split = malloc(sizeof(char *) * (len + 1));
	if (!split)
		return (0);
	split = get_split(split, s, c);
	split[len] = NULL;
	return (split);
}
*/
/*
#include <stdio.h>
#include "libft.h"

int main ()
{
    int i = 0;
    char **splited;

    char *s = "Bonjour.. Je vais. fort. bien.. ce.soir. on fait.. la fete?..!.";
    char *s = "Tripouille";

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
*/

/*
// Splits string depending on the delimiter
int main()
{
	int i = 0;
	char a[] = "hola nicolas, como esta ?";
	char **tab;
	tab = ft_split(a, ' ');
	while(tab[i])
	{
		printf(":%s:\n", tab[i]);
		i++;
	}
	i = 0;
	while(tab[i])
		printf("%s", (tab[i++]));
}
*/
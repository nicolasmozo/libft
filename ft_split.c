/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:10:01 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/27 18:25:43 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	if_charset( char const *s, char c)
{
	if (*s == c)
		return (1);
	if (*s == 0)
		return (1);
	return (0);
}

static int	count_words(char const *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == c)
			counter++;
		i++;
	}
	return (counter);
}

static	int	count_character(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !if_charset(&str[i], c))
		i++;
	return (i);
}

static	char	*get_array(const char *str, int len)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *) malloc (sizeof(char) * len + 1);
	if (!tab)
		return (0);
	while (i < len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		lenght_word;
	int		j;

	j = 0;
	i = 0;
	split = malloc(sizeof(char *) * count_words(s, c) + 2);
	if (!(split))
		return (0);
	while (s[i])
	{
		if (s[i] && if_charset(&s[i], c))
			i++;
		else
		{
			lenght_word = count_character(&s[i], c);
			split[j] = get_array(&s[i], lenght_word);
			j++;
			i += lenght_word;
		}
	}
	split[j] = 0;
	return (split);
}
/*
// Splits string depending on the delimiter
#include <stdio.h>
int main()
{
	int i = 0;
	char a[] = "hola nicolas, como esta?";
	char **tab;
	tab = ft_split(a, ' ');
	while(tab[i])
	{
		printf(":%s:\n", tab[i]);
		i++;
	}
}
*/
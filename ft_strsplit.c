/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 23:18:41 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/28 12:52:01 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_count(const char *s, char c)
{
	int i;

	i = 0;
	if (*s != '\0' && *s != c)
	{
		s++;
		i++;
	}
	while (*s != '\0')
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s != '\0')
				i++;
		}
		s++;
	}
	return (i);
}

static int		ft_length(const char *s, char c)
{
	int i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**aaa;
	size_t	i;
	int		j;

	j = 0;
	if (!(aaa = (char**)malloc(sizeof(char*) * ft_word_count(s, c) + 1)))
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
		{
			if (!(aaa[j] = (char*)malloc(ft_length(s, c) + 1)))
				return (NULL);
			while (*s != '\0' && *s != c)
				aaa[j][i++] = (char)*s++;
			aaa[j][i] = '\0';
			j++;
		}
	}
	aaa[j] = NULL;
	return (aaa);
}

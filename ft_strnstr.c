/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 15:48:22 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/23 16:58:17 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)(str + i));
	while (i < len && str[i])
	{
		j = 0;
		while (i + j < len && needle[j] == str[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 15:22:56 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/22 15:24:00 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;

	tmp = (0);
	while (*str)
	{
		if (*str == c)
			tmp = (char*)str;
		str++;
	}
	if (c == '\0')
		return ((char*)str);
	return (tmp);
}

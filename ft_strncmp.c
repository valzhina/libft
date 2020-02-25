/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 16:59:16 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/23 17:44:09 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

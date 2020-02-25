/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:33:24 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/23 22:36:41 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmp1;
	const unsigned char	*tmp2;

	tmp1 = &(*dst);
	tmp2 = &(*src);
	if (!tmp1 && !tmp2)
		return (NULL);
	while (n-- > 0)
	{
		*tmp1++ = *tmp2;
		if (*tmp2++ == (unsigned char)c)
			return (tmp1);
	}
	return (NULL);
}

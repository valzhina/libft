/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 23:29:50 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/23 23:31:14 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	if (dst == src)
		return (dst);
	else if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		i = 0;
		dest = (unsigned char *)dst;
		sorc = (unsigned char *)src;
		while (len > 0)
		{
			len--;
			dest[len] = sorc[len];
		}
	}
	return (dst);
}

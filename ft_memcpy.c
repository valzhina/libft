/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 21:47:34 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/23 22:37:23 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp1;
	const unsigned char *tmp2;

	tmp1 = &(*dst);
	tmp2 = &(*src);
	if (!tmp1 && !tmp2)
		return (NULL);
	while (n-- > 0)
		*(tmp1++) = *(tmp2++);
	return (dst);
}

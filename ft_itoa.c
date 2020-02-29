/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:44:55 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/28 12:50:17 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		is_negative(int *str)
{
	if (*str < 0)
	{
		*str = -(*str);
		return (1);
	}
	return (0);
}

char			*ft_itoa(int n)
{
	int				len;
	int				negative;
	char			*str;
	unsigned int	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 2;
	negative = is_negative(&n);
	nb = n;
	while (nb /= 10)
		len++;
	len = len + negative;
	if (!(str = (char*)malloc(len)))
		return (NULL);
	str[len--] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}

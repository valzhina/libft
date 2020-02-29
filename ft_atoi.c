/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:50:46 by vpiskun           #+#    #+#             */
/*   Updated: 2020/02/28 14:06:24 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int result;
	int sign;
	int digit;
	
	result = 0;
	sign = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10;
		digit = *str - '0';
		result = result + (digit * sign);
		str++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:41:16 by vpiskun           #+#    #+#             */
/*   Updated: 2020/03/02 23:41:53 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int x, int y)
{
	int	n;
	int	result;

	n = y;
	result = 1;
	while (n-- > 0)
		result *= x;
	return (result);
}

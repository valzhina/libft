/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:42:31 by vpiskun           #+#    #+#             */
/*   Updated: 2020/03/02 23:43:12 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_skip_char(char **ptr, char c)
{
	char *s;

	if (!ptr || !*ptr)
		return (0);
	s = *ptr;
	while (*s == c)
		s++;
	*ptr = s;
	return (*s != '\0' ? 1 : 0);
}

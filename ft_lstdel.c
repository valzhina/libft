/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:15:56 by vpiskun           #+#    #+#             */
/*   Updated: 2020/03/02 21:14:39 by vpiskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*temp;

	while (alst != NULL && del != NULL)
	{
		temp = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = temp;
	}
	*alst = NULL;
}

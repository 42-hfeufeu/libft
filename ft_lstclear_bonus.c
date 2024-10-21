/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 00:23:55 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/14 01:32:49 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*sack;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		sack = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = sack;
	}
	(*lst) = NULL;
}

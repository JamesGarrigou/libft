/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 21:37:21 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/05/04 21:52:06 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_temp;

	if (!lst || !(*del))
		return ;
	while (*lst)
	{
		lst_temp = *lst;
		*lst = lst_temp->next;
		ft_lstdelone(lst_temp, *del);
	}
}

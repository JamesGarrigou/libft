/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 21:33:13 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/05/04 13:30:31 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_temp;

	if (!lst)
		return ;
	lst_temp = *lst;
	if (!lst_temp)
	{
		*lst = new;
		return ;
	}
	while (lst_temp->next)
		lst_temp = lst_temp->next;
	lst_temp->next = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 20:53:18 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/05/04 21:51:24 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*last_new;

	if (!lst || !new)
		return ;
	last_new = ft_lstlast(new);
	last_new->next = *lst;
	*lst = new;
}

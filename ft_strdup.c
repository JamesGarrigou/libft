/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:26:17 by rgarrigo          #+#    #+#             */
/*   Updated: 2022/05/03 11:45:08 by rgarrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		len_s;
	int		i;

	len_s = ft_strlen(s);
	copy = malloc(len_s + 1);
	if (!copy)
	{
		errno = ENOMEM;
		return (0);
	}
	i = 0;
	while (i < len_s)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

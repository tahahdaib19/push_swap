/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:03:00 by thdaib            #+#    #+#             */
/*   Updated: 2024/12/22 12:03:05 by thdaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_dlstsize(t_dlist *lst)
{
	int		i;
	t_dlist	*ls;

	ls = lst;
	i = 0;
	while (ls)
	{
		i++;
		ls = ls->next;
	}
	return (i);
}

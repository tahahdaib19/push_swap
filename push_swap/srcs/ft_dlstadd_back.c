/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:58:41 by thdaib            #+#    #+#             */
/*   Updated: 2024/12/22 11:58:56 by thdaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_dlstadd_back(t_dlist **lst, t_dlist *new)
{
	t_dlist	*ptr;

	ptr = ft_dlstlast(*lst);
	if (!ptr)
		*lst = new;
	else
		ptr->next = new;
}

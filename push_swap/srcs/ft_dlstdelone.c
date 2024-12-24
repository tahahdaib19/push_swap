/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:00:35 by thdaib            #+#    #+#             */
/*   Updated: 2024/12/22 12:00:43 by thdaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_dlstdelone(t_dlist *lst, void (*del)(int))
{
	if (!lst)
		return ;
	if (lst)
	{
		if (del)
			del(lst->content);
		free(lst);
	}
}

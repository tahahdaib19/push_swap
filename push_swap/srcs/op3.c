/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:04:53 by thdaib            #+#    #+#             */
/*   Updated: 2024/12/22 12:04:59 by thdaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	r_rotate_r(t_dlist **stack_a, t_dlist **stack_b)
{
	r_rotate_a(&(*stack_a));
	r_rotate_b(&(*stack_b));
}

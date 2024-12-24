/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in_bound.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:54:10 by thdaib            #+#    #+#             */
/*   Updated: 2024/12/22 11:54:30 by thdaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_is_in_bound(char **inputs)
{
	int		i;
	int		j;
	int		len;
	long	num;

	i = 0;
	while (inputs[i])
	{
		len = ft_strlen(inputs[i]);
		j = 0;
		if (len > 12)
		{
			if (inputs[i][j] == '+' || inputs[i][j] == '-')
				j++;
			while (inputs[i][j++] == '0')
				len--;
		}
		if (len > 12)
			return (1);
		num = ft_atol(inputs[i]);
		if (num < -2147483648 || num > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

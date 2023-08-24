/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_duplicate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:00:06 by amennad           #+#    #+#             */
/*   Updated: 2023/08/23 17:59:14 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	has_duplicate(int *array)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_int_array_len(array);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j + i])
				ft_exit(-1);
			j++;
		}
		i++;
	}
}

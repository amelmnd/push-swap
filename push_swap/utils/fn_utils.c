/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:23:49 by amennad           #+#    #+#             */
/*   Updated: 2023/08/23 17:45:28 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_empty(t_node *pile)
{
	if (pile == NULL)
		return (1);
	return (0);
}

void	ft_exit(int status)
{
	if (status == 0)
		exit(EXIT_SUCCESS);
	else if (status == -1)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
}

int	ft_int_array_len(int *nb)
{
	size_t	i;

	i = 0;
	while (nb[i])
	{
		i++;
	}
	return (i);
}




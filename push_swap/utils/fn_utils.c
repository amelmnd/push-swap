/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:23:49 by amennad           #+#    #+#             */
/*   Updated: 2023/08/21 11:08:25 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_empty(t_node *pile)
{
	if (pile == NULL)
		return (1);
	return (0);
}

void	ft_error(void)
{
	ft_putstr("Error");
	exit(EXIT_FAILURE);
}

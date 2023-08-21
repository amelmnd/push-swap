/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:16:20 by amennad           #+#    #+#             */
/*   Updated: 2023/08/21 15:18:58 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node *pile)
{
	int	tmp;

	if (pile == NULL || pile->next == NULL)
		return ;
	tmp = pile->value;
	pile->value = pile->next->value;
	pile->next->value = tmp;
}

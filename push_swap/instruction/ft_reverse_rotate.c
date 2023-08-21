/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:52:13 by amennad           #+#    #+#             */
/*   Updated: 2023/08/21 15:56:03 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_node *pile)
{
	t_node	*tmp;
	int		last_value;

	if (pile == NULL || pile->next == NULL)
		return ;
	tmp = pile;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	last_value = tmp->next->value;
	tmp->next->value = pile->value;
	pile->value = last_value;
}

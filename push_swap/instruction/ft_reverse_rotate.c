/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:52:13 by amennad           #+#    #+#             */
/*   Updated: 2023/08/28 17:39:16 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_pile(t_node **pile, char *pile_name)
{
	t_node	*last;
	t_node	*first;

	if (*pile == NULL || (*pile)->next == NULL)
		return ;
	last = *pile;
	while (last->next->next != NULL)
	{
		last = last->next;
	}
	first = *pile;
	*pile = last->next;
	last->next = NULL;
	(*pile)->next = first;
	if (pile_name)
		ft_putstr(pile_name);
}

void	ft_reverse_rotate_rrr(t_node **pile_a, t_node **pile_b)
{
	ft_reverse_rotate_pile(pile_a, "");
	ft_reverse_rotate_pile(pile_b, "");
	ft_putstr("rrr");
}

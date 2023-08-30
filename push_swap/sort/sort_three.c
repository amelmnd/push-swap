/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:49:46 by amennad           #+#    #+#             */
/*   Updated: 2023/08/30 15:29:41 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

void	sort_three(t_node *pile_a)
{
	while (!is_sorted(pile_a))
	{
		if ((pile_a->value > pile_a->next->value)
			&& (pile_a->next->value > pile_a->next->next->value))
		{
			ft_rotate_pile(pile_a, "ra");
			ft_swap_pile(pile_a, "sa");
		}
		else
		{
			if (is_sorted(pile_a->next))
				ft_rotate_pile(pile_a, "ra");
			else if (pile_a->value > pile_a->next->value)
				ft_swap_pile(pile_a, "sa");
			else if (pile_a->value > pile_a->next->next->value)
				ft_reverse_rotate_pile(&pile_a, "rra");
			else if (pile_a->next->value > pile_a->next->next->value)
				ft_rotate_pile(pile_a, "ra");
		}
	}
}

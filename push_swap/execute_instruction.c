/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:48:26 by amennad           #+#    #+#             */
/*   Updated: 2023/09/04 18:37:14 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

void	execute_instruction(t_node *pile_a, t_node *pile_b)
{
	int	size_pile_a;
	int	size_pile_b;

	size_pile_a = size_pile(pile_a);
	size_pile_b = size_pile(pile_b);
	if (size_pile_a == 2 && size_pile_b == 0)
		ft_swap_pile(pile_a, "sa");
	else if (size_pile_a == 3)
		three_sort(&pile_a);
	else if (size_pile_a == 4)
		four_sort(pile_a, pile_b, size_pile_a);
	else if (size_pile_a == 5)
		five_sort(pile_a, pile_b, size_pile_a);
	else if (size_pile_a > 5)
	{
		call_buble_sort(pile_a, size_pile_a);
		radix_sort(&pile_a, &pile_b);
	}
// if (is_sorted(pile_a))
// 		printf("\n---------- PILE TRIER----------\n");
	ft_free_pile(pile_a);
}

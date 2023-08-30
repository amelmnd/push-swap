/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:48:26 by amennad           #+#    #+#             */
/*   Updated: 2023/08/30 17:59:47 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

int	is_reverse_sort(t_node *pile)
{
	t_node	*current;

	current = pile;
	while (current != NULL && current->next != NULL)
	{
		if (current->value > current->next->value)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}

void	execute_instruction(t_node *pile_a, t_node *pile_b)
{
	int	size_pile_a;
	int	size_pile_b;

	size_pile_a = size_pile(pile_a);
	size_pile_b = size_pile(pile_b);
	if (size_pile_a == 2 && size_pile_b == 0)
		ft_swap_pile(pile_a, "sa");
	else if (size_pile_a == 3)
		sort_three(pile_a);
	else if (size_pile_a == 4)
	{
		sort_four(pile_a, pile_b, size_pile_a);
	}
	else if (size_pile_a == 5)
	{
		sort_five(pile_a, pile_b, size_pile_a);
	}
	else if (size_pile_a > 5)
	{
		printf("---- more 5 ----\n");
	}
	else
		ft_exit(-1);
}

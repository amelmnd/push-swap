/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:34:26 by amennad           #+#    #+#             */
/*   Updated: 2023/09/04 17:44:13 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

void	four_sort(t_node *pile_a, t_node *pile_b, int size_list)
{
	int	min;

	min = 1;
	index_more_small(pile_a, &min, size_list);
	if (min == 1)
	{
		ft_push_pile(&pile_a, &pile_b, "pb");
		three_sort(&pile_a);
		ft_push_pile(&pile_b, &pile_a, "pa");
	}
	else if (min == 2)
		ft_swap_pile(pile_a, "sa");
	else if (min == 3)
	{
		ft_reverse_rotate_pile(&pile_a, "rra");
		ft_reverse_rotate_pile(&pile_a, "rra");
	}
	else if (min == 4)
		ft_reverse_rotate_pile(&pile_a, "rra");
	if (is_sorted(pile_a) == 0)
	{
		ft_push_pile(&pile_a, &pile_b, "pb");
		three_sort(&pile_a);
		ft_push_pile(&pile_b, &pile_a, "pa");
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:49:46 by amennad           #+#    #+#             */
/*   Updated: 2023/08/31 10:56:00 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

void	five_sort(t_node *pile_a, t_node *pile_b, int size_list)
{
	int	min;

	min = 1;
	index_more_small(pile_a, &min, size_list);
	if (min == 1)
	{
		ft_push_pile(&pile_a, &pile_b, "pb");
		four_sort(pile_a, pile_b, size_list - 1);
		ft_push_pile(&pile_b, &pile_a, "pa");
	}
	else if (min == 2)
		ft_swap_pile(pile_a, "sa");
	else if (min == 3)
	{
		ft_reverse_rotate_pile(&pile_a, "rra");
		ft_reverse_rotate_pile(&pile_a, "rra");
		ft_reverse_rotate_pile(&pile_a, "rra");
	}
	else if (min == 4)
	{
		ft_reverse_rotate_pile(&pile_a, "rra");
		ft_reverse_rotate_pile(&pile_a, "rra");
	}
	else if (min == 5)
		ft_reverse_rotate_pile(&pile_a, "rra");
	if (is_sorted(pile_a) == 0)
	{
		ft_push_pile(&pile_a, &pile_b, "pb");
		four_sort(pile_a, pile_b, size_list - 1);
		ft_push_pile(&pile_b, &pile_a, "pa");
	}
}

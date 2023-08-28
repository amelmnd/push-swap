/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:20:05 by amennad           #+#    #+#             */
/*   Updated: 2023/08/28 10:47:14 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

void	has_duplicate_pile(t_node *pile)
{
	t_node	*current_item;
	t_node	*next_item;

	current_item = pile;
	while (current_item != NULL)
	{
		next_item = current_item->next;
		while (next_item != NULL)
		{
			if (next_item->value == current_item->value)
			{
				ft_exit(-1);
			}
			next_item = next_item->next;
		}
		current_item = current_item->next;
	}
}

int	is_sorted(t_node *pile)
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

t_node	*check_arg(int argc, char *argv[], t_node *pile_a)
{
	int	has_space;
	int	i;

	if (!argv[1][0])
		ft_exit(0);
	i = argc - 1;
	while (argv[i] && i > 0)
	{
		has_space = has_valid_arg(argv[i]);
		if (!has_space)
		{
			pile_a = ft_push(pile_a, ft_atoi_p(argv[i]));
		}
		else
		{
			pile_a = ft_split_atoi(argv[i], ' ', pile_a);
		}
		i--;
	}
	has_duplicate_pile(pile_a);
	if (is_sorted(pile_a))
		ft_exit(0);
	return (pile_a);
}

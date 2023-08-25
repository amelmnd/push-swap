/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:20:05 by amennad           #+#    #+#             */
/*   Updated: 2023/08/25 15:32:17 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

//TODO : NE FONCTIONNE PAS !!!!
void	has_duplicate_pile(t_node *pile)
{
	t_node	*temp1;
	t_node	*temp2;

	temp1 = pile;
	temp2 = pile->next;
	while (temp1 != NULL)
	{
		while (temp2 != NULL)
		{
			if (temp1->value == temp2->value)
				ft_exit(-1);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}

int	isSorted(t_node *pile)
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

	i = argc - 1 ;
	// i = 1;
	if (!argv[1][0])
		ft_exit(0);
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
	if (isSorted(pile_a))
		ft_exit(0);
	return (pile_a);
}

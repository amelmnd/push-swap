/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:23:49 by amennad           #+#    #+#             */
/*   Updated: 2023/09/04 18:30:45 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

int	is_empty(t_node *pile)
{
	if (pile == NULL)
		return (1);
	return (0);
}

void	ft_free_pile(t_node *pile)
{
	t_node	*current;
	t_node	*next;

	current = pile;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

void	ft_exit(int status, t_node *pile)
{
	if (status == 0)
	{
		ft_free_pile(pile);
		exit(EXIT_SUCCESS);
	}
	else if (status == -1)
	{
		ft_free_pile(pile);
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
}

int	size_pile(t_node *pile)
{
	int	size;

	size = 0;
	if (pile)
	{
		while (pile != NULL)
		{
			pile = pile->next;
			size++;
		}
		return (size);
	}
	return (0);
}

void	index_more_small(t_node *pile, int *min, int size)
{
	int		more_small;
	t_node	*current;
	int		i;

	more_small = pile->value;
	*min = 1;
	i = 2;
	if (pile == NULL || size <= 0)
	{
		return ;
	}
	current = pile->next;
	while (current != NULL)
	{
		if (current->value < more_small)
		{
			more_small = current->value;
			*min = i;
		}
		current = current->next;
		i++;
	}
}

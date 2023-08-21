/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:05:20 by amennad           #+#    #+#             */
/*   Updated: 2023/08/21 14:51:54 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pop_first_node(t_node *pile, int pop_value)
{
	t_node	*temp;
	t_node	*previous;

	previous = pile;
	temp = previous->next;
	while (temp != NULL)
	{
		pop_value = temp->value;
		if (temp->next == NULL)
		{
			previous->next = temp->next;
			free(temp);
			return (pop_value);
		}
		previous = temp;
		temp = temp->next;
	}
	return (pop_value);
}

int	ft_pop(t_node *pile)
{
	int	pop_value;

	pop_value = 0;
	if (is_empty(pile))
	{
		free(pile);
		exit(EXIT_SUCCESS);
	}
	if (pile->next == NULL)
	{
		pop_value = pile->value;
		free(pile);
	}
	else
	{
		pop_value = pop_first_node(pile, pop_value);
	}
	return (pop_value);
}

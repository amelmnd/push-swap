/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:20:24 by amennad           #+#    #+#             */
/*   Updated: 2023/07/05 15:00:26 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	pop_top_node(t_pile pile)
{
	t_node	*temp;
	t_node	*before;
	int rest;

	if (is_empty(pile))
		return (NULL);
	if (pile -> next == NULL)
	{
		printf("pop_top_node 1 item : %i\n", pile->value);
		return (NULL);
	}
	else
	{
		temp = pile;
		before = pile;
		while (pile -> next == NULL)
		{
			before = temp;
			temp = temp->next;
		}
			printf("pile: %i\n", pile->value);
		// printf("before: %i\n", before->value);
		// printf("temp : %i\n", temp->value);
		rest = temp->value;
		printf("rest : %i\n", rest);
		before->next = NULL;
	}
	return (before);
}

t_pile	pop_button_node(t_pile pile)
{
	t_node	*new_pile;

	if (is_empty(pile))
		return (NULL);
	new_pile = malloc(sizeof(*new_pile));
	if (!new_pile)
		return (NULL);
	new_pile = pile->next;
	printf("pop_button_node %i\n", pile->value);
	return (new_pile);
}


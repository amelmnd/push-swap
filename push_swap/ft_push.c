/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:44:40 by amennad           #+#    #+#             */
/*   Updated: 2023/07/05 13:14:48 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	push_button_node(t_pile pile, int item)
{
	t_node	*element;
	t_node	*temp;

	element = malloc(sizeof(t_node));
	if (!element)
		return (NULL);
	element->value = item;
	element->next = NULL;
	printf("element->value :%d\n", element->value);
	if (is_empty(pile))
		return (element);
	else
	{
		temp = pile;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = element;
		return (pile);
	}
}

t_pile	push_top_node(t_pile pile, int item)
{
	t_node	*element;

	element = malloc(sizeof(t_node));
	if (!element)
		return (NULL);
	element->value = item;
	printf("element->value :%d\n", element->value);
	if (is_empty(pile))
		element->next = NULL;
	else
		element->next = pile;
	return (element);
}

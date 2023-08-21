/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:44:40 by amennad           #+#    #+#             */
/*   Updated: 2023/08/21 11:38:45 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_push(t_node *pile, int item)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = item;
	if (is_empty(pile))
		new_node->next = NULL;
	else
		new_node->next = pile;
	return (new_node);
}

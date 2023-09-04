/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:44:40 by amennad           #+#    #+#             */
/*   Updated: 2023/09/04 18:24:44 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
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

void	ft_push_pile(t_node **pile_cut, t_node **pile_add, char *pile_name)
{
	t_node	*node_to_push;

	if (*pile_cut)
	{
		node_to_push = *pile_cut;
		*pile_cut = (*pile_cut)->next;
		node_to_push->next = *pile_add;
		*pile_add = node_to_push;
		ft_putstr(pile_name);
	}
}

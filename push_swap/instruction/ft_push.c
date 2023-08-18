/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:44:40 by amennad           #+#    #+#             */
/*   Updated: 2023/08/18 15:55:19 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_node *pile, int item)
{
	t_node	*element;

	element = malloc(sizeof(t_node));
	if (!element)
		return ;
	element->value = item;
	if (is_empty(pile))
		element->next = NULL;
	else
		element->next = pile;
}

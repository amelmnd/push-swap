/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_dev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:39:51 by amennad           #+#    #+#             */
/*   Updated: 2023/08/18 15:21:54 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_pile(t_node *pile)
{
	if (pile == NULL)
	{
		printf("pile is empty\n");
		return ;
	}
	else
	{
		while (pile != NULL)
		{
			printf("-> [%d]\n", pile->value);
			pile = pile->next;
		}
	}
}
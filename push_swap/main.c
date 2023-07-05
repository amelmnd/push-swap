/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:12:00 by amennad           #+#    #+#             */
/*   Updated: 2023/07/05 13:14:02 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_node	*pile_a;
	t_node	*pile_b;

	pile_a = NULL;
	pile_b = NULL;

	pile_a = push_button_node(pile_a, 2);
	pile_a = push_top_node(pile_a, 42);
	pile_a = push_top_node(pile_a, 642);
	pile_a = push_top_node(pile_a, 8642);
	if (is_empty(pile_a))
		printf("empty\n");
	else
		print_pile(pile_a);
	return (0);
}

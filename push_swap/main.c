/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:12:00 by amennad           #+#    #+#             */
/*   Updated: 2023/08/18 16:03:17 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_node	*pile_a;
	// t_node	*pile_b;

	pile_a->next = NULL;
	// pile_b = NULL;

	ft_push(&pile_a, 1);
	if (is_empty(&pile_a))
		printf("empty\n");
	else
		print_pile(&pile_a);
	return (0);
}

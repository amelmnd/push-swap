/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:12:00 by amennad           #+#    #+#             */
/*   Updated: 2023/08/31 17:31:35 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_node	*pile_a;
	t_node	*pile_b;

	pile_a = NULL;
	pile_b = NULL;
	printf("\n--------PILE A--------\n");
	printf("\n***ft_push**\n");
	pile_a = ft_push(pile_a, 58);
	pile_a = ft_push(pile_a, -10);
	pile_a = ft_push(pile_a, 5);
	pile_a = ft_push(pile_a, 365);
	print_pile(pile_a);
	// printf("\n***ft_pop**\n");
	// printf("pop value = %d\n", ft_pop(pile_a));

	// print_pile(pile_a);

	printf("\n***ft_swap**\n");
	// ft_swap(pile_a);
	// ft_rotate(pile_a);
	ft_reverse_rotate(pile_a);
	print_pile(pile_a);

	printf("\n--------PILE B--------\n");
	print_pile(pile_b);
	// ? block for test pile
	// if (is_empty(pile_a))
	// 	printf("empty\n");
	// else
	// 	print_pile(&pile_a);
	// ! block for test leaks
	system("leaks push_swap");
	return (0);
}

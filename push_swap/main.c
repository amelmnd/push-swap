/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:17:34 by amennad           #+#    #+#             */
/*   Updated: 2023/08/25 15:29:14 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*pile_a;
	// t_node	*pile_b;

	pile_a = NULL;
	// pile_b = NULL;
	if (argc < 2)
		ft_exit(1);
	else
	{
		pile_a = check_arg(argc, argv, pile_a);
	}
	// ft_push_pile(&pile_a, &pile_b, "sb");
	// ft_push_pile(&pile_a, &pile_b, "sb");
	// ft_push_pile(&pile_a, &pile_b, "sb");
	// ft_reverse_rotate_pile(pile_a, "rra");
	// ft_rotate_pile(pile_a, "ra");
	// ft_reverse_rotate_pile(pile_b, "rrb");
	// ft_rotate_pile(pile_b, "rb");
	// ft_reverse_rotate_rrr(pile_a, pile_b);
	// ft_rotate_rr(pile_a, pile_b);
	// ft_swap_pile(pile_a, "sa");
	// ft_swap_pile(pile_b, "sb");
	// ft_swap_ss(pile_a, pile_b);
	system("leaks push_swap");
	return (0);
}

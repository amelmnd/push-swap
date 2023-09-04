/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:17:34 by amennad           #+#    #+#             */
/*   Updated: 2023/09/04 18:37:22 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*pile_a;
	t_node	*pile_b;

	pile_a = NULL;
	pile_b = NULL;
	if (argc < 2)
		ft_exit(0, pile_a);
	else
	{
		pile_a = check_arg(argc, argv, pile_a);
	}
	if (pile_a == NULL)
		ft_exit(-1, pile_a);
	execute_instruction(pile_a, pile_b);
	system("leaks push_swap");
	return (0);
}

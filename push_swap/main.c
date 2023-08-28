/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:17:34 by amennad           #+#    #+#             */
/*   Updated: 2023/08/28 10:50:03 by amennad          ###   ########.fr       */
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
		ft_exit(0);
	else
	{
		pile_a = check_arg(argc, argv, pile_a);
	}
	if (pile_a == NULL)
		ft_exit(-1);
	system("leaks push_swap");
	return (0);
}

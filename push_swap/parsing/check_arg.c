/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:20:05 by amennad           #+#    #+#             */
/*   Updated: 2023/08/24 15:12:00 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

t_node	*check_arg(char *argv[], t_node *pile_a)
{
	int	has_space;
	int	i;

	i = 1;
	if (!argv[1][0])
		ft_exit(0);
	while (argv[i])
	{
		has_space = has_valid_arg(argv[i]);
		if (!has_space)
		{
			pile_a = ft_push(pile_a, ft_atoi_ps(argv[i]));
		}
		else
		{
			pile_a = ft_split_atoi(argv[i], ' ', pile_a);
			// has_duplicate(argv_split);
			// printf("NO DUPLICATE\n");
		}
		i++;
	}
	return (pile_a);
}

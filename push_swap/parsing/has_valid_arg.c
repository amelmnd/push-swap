/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_valid_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:38:04 by amennad           #+#    #+#             */
/*   Updated: 2023/08/23 16:35:54 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	has_valid_arg(char *value)
{
	int		i;
	char	space;
	int		nb;
	int		*argv_split;

	i = 0;
	space = 0;
	nb = 0;
	while (value[i])
	{
		printf("----value[%d] = %c----\n", i, value[i]);
		if (!ft_isdigit(value[i]) && value[i] != '-' && value[i] != ' ')
		{
			ft_exit(-1);
		}
		else if (value[i] == ' ')
		{
			space = 1;
			printf("space = %d\n", space);
		}
		i++;
	}
	printf("coin\n");
	if (i > 11)
		ft_exit(-1);
	printf("coin\n");
	if (space == 0)
	{
		nb = ft_atoi_ps(value);
		printf("nb = %d\n", nb);
	}
	else
	{
		argv_split = ft_split_atoi(value, ' ');
		printf("argv_split[0] = %d\n", argv_split[0]);
		printf("argv_split[0] = %d\n", argv_split[1]);
	}
}

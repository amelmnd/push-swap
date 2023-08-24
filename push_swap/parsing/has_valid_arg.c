/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_valid_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:38:04 by amennad           #+#    #+#             */
/*   Updated: 2023/08/23 18:15:07 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_valid_arg(char *value)
{
	int		i;
	char	space;

	i = 0;
	space = 0;
	while (value[i])
	{
		if (!ft_isdigit(value[i]) && value[i] != '-' && value[i] != ' ')
		{
			ft_exit(-1);
		}
		else if (value[i] == ' ')
		{
			space = 1;
		}
		i++;
	}
	return (space);
}

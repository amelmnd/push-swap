/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:23:49 by amennad           #+#    #+#             */
/*   Updated: 2023/08/30 18:41:57 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_empty(t_node *pile)
{
	if (pile == NULL)
		return (1);
	return (0);
}

void	ft_exit(int status)
{
	if (status == 0)
		exit(EXIT_SUCCESS);
	else if (status == -1)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	size_pile(t_node *pile)
{
	int	size;

	size = 0;
	if (pile)
	{
		while (pile != NULL)
		{
			pile = pile->next;
			size++;
		}
		return (size);
	}
	return (0);
}

//TODO cette fonction gerer 2 leaks
/*
2 (32 bytes) ROOT LEAK: 0x60000154c060 [16]  length: 1  "U"
1 (16 bytes) 0x60000154c050 [16]
*/
void	index_more_small(t_node *pile, int *min, int size)
{
	t_node	*tmp1;
	t_node	*tmp2;
	int		i;
	int		more_small;

	tmp1 = pile;
	i = 1;
	more_small = tmp1->value;
	while (i <= size)
	{
		tmp2 = pile;
		while (tmp2 != NULL)
		{
			if (tmp2->value < more_small)
			{
				*min = i;
				more_small = tmp1->value;
			}
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:04:06 by amennad           #+#    #+#             */
/*   Updated: 2023/08/30 19:59:10 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

void	bubble_sort(int arr[], int n)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	index_pile(t_node *pile_a, int *array_from_stack, int size_pile_a)
{
	int		i;
	t_node	*tmp;
	int		index;

	i = 0;
	index = 0;
	while (i < size_pile_a)
	{
		tmp = pile_a;
		while (tmp)
		{
			if (tmp->value == array_from_stack[i])
			{
				tmp->index = index;
				index++;
				break ;
			}
			tmp = tmp->next;
		}
		i++;
	}
}

void	call_buble_sort(t_node *pile_a, int size_pile_a)
{
	int		*array_from_stack;
	int		i;
	t_node	*tmp;

	tmp = pile_a;
	i = 0;
	array_from_stack = malloc(sizeof(int) * size_pile_a);
	while (tmp != NULL)
	{
		array_from_stack[i] = tmp->value;
		tmp = tmp->next;
		i++;
	}

	bubble_sort(array_from_stack, size_pile_a);
	index_pile(pile_a, array_from_stack, size_pile_a);
	print_pile_index(pile_a);
	free(array_from_stack);
}

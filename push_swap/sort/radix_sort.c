/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:51:19 by amennad           #+#    #+#             */
/*   Updated: 2023/08/31 17:44:17 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

static int	get_max_bits(t_node **stack)
{
	t_node	*tmp;
	int		max;
	int		max_bits;

	tmp = *stack;
	max = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

int	radix_rotate(t_node **stack, char *pile_name)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tail;

	if (size_pile(*stack) < 2)
		return (-1);
	tmp1 = *stack;
	tmp2 = *stack;
	while (tmp2->next)
	{
		tmp2 = tmp2->next;
	}
	tail = tmp2;
	*stack = tmp1->next;
	tmp1->next = NULL;
	tail->next = tmp1;
	if (pile_name)
		ft_putstr(pile_name);
	return (0);
}

int	radix_push(t_node **pile_cute, t_node **pile_add, char *pile_name)
{
	t_node	*tmp;
	t_node	*tmp_pile_cute;
	t_node	*tmp_pile_add;

	if (size_pile(*pile_add) == 0)
		return (-1);
	tmp_pile_cute = *pile_cute;
	tmp_pile_add = *pile_add;
	tmp = tmp_pile_add;
	tmp_pile_add = tmp_pile_add->next;
	*pile_add = tmp_pile_add;
	if (!tmp_pile_cute)
	{
		tmp_pile_cute = tmp;
		tmp_pile_cute->next = NULL;
		*pile_cute = tmp_pile_cute;
	}
	else
	{
		tmp->next = tmp_pile_cute;
		*pile_cute = tmp;
	}
	if (pile_name)
		ft_putstr(pile_name);
	return (0);
}

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	tmp = *stack_a;
	size = size_pile(tmp);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *stack_a;
			if (((tmp->index >> i) & 1) == 1)
				radix_rotate(stack_a, "ra");
			else
				radix_push(stack_b, stack_a, "pb");
		}
		while (size_pile(*stack_b) != 0)
			radix_push(stack_a, stack_b, "pa");
		i++;
	}
}

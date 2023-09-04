/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:09:31 by amennad           #+#    #+#             */
/*   Updated: 2023/09/04 18:24:59 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

void	ft_rotate_pile(t_node *pile, char *pile_name)
{
	t_node	*tmp;
	int		first_value;

	if (pile == NULL || pile->next == NULL)
		return ;
	tmp = pile;
	first_value = pile->value;
	while (tmp->next != NULL)
	{
		tmp->value = tmp->next->value;
		tmp = tmp->next;
	}
	tmp->value = first_value;
	if (pile_name)
		ft_putstr(pile_name);
}

void	ft_rotate_rr(t_node *pile_a, t_node *pile_b)
{
	ft_rotate_pile(pile_a, "");
	ft_rotate_pile(pile_b, "");
	ft_putstr("rr");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:16:20 by amennad           #+#    #+#             */
/*   Updated: 2023/09/04 18:25:03 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"

void	ft_swap_pile(t_node *pile, char *pile_name)
{
	int	tmp;

	if (pile == NULL || pile->next == NULL)
		return ;
	tmp = pile->value;
	pile->value = pile->next->value;
	pile->next->value = tmp;
	if (pile_name)
		ft_putstr(pile_name);
}

void	ft_swap_ss(t_node *pile_a, t_node *pile_b)
{
	ft_swap_pile(pile_a, "");
	ft_swap_pile(pile_b, "");
	ft_putstr("ss");
}

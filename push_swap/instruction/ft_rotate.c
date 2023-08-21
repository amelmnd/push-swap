/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:09:31 by amennad           #+#    #+#             */
/*   Updated: 2023/08/21 16:09:32 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ft_rotate(t_node *pile)
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
}

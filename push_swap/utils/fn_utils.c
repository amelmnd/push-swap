/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:23:49 by amennad           #+#    #+#             */
/*   Updated: 2023/08/18 15:21:57 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_empty(t_node *pile)
{
	if (pile == NULL)
		return (TRUE);
	return (FALSE);
}

void	ft_error(void)
{
	ft_putstr("Error");
	exit(EXIT_FAILURE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:23:49 by amennad           #+#    #+#             */
/*   Updated: 2023/09/01 12:14:27 by amennad          ###   ########.fr       */
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
void index_more_small(t_node *pile, int *min, int size)
{
    if (pile == NULL || size <= 0) {
        // Gérer les cas d'erreur ici
        return;
    }

    int more_small = pile->value;
    *min = 1;
    int i = 2; // Commencer à partir de la deuxième position

    t_node *current = pile->next;
    while (current != NULL)
    {
        if (current->value < more_small)
        {
            more_small = current->value;
            *min = i;
        }
        current = current->next;
        i++;
    }
}

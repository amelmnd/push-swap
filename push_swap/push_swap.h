/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:54 by amennad           #+#    #+#             */
/*   Updated: 2023/07/05 13:13:27 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h> //a delete
# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
} t_node,	*t_pile;


// FN DEV
void	print_pile(t_pile pile);

// FN UTILS
void	ft_putstr(char *s);
void	ft_error(void);
int		is_empty(t_pile pile);

// INSTRUCTION
t_pile	push_top_node(t_pile pile, int item);
t_pile	push_button_node(t_pile pile, int element);


#endif
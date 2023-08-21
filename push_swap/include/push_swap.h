/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:54 by amennad           #+#    #+#             */
/*   Updated: 2023/08/21 14:40:40 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h> //a delete
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*stack_top;
}					t_stack;

// FN DEV DELETE LATER
void				print_pile(t_node *pile);

// UTILS
int					is_empty(t_node *pile);
void				ft_error(void);

// LIBFT UTILS
void				ft_putstr(char *s);

// CHAIN LIST
void				ft_push(t_node pile, int item);


#endif

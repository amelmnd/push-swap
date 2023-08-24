/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:54 by amennad           #+#    #+#             */
/*   Updated: 2023/08/23 17:53:59 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
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
void				ft_exit(int status);
int					ft_int_array_len(int *nb);

// PARSING
int					has_valid_arg(char *value);
int					*ft_split_atoi(char const *s, char sep);
int					ft_atoi_ps(char *str);
void				has_duplicate(int *array);

// CHAIN LIST
int					is_empty(t_node *pile);
t_node				*ft_push(t_node *pile, int item);
int					ft_pop(t_node *pile);
void				ft_swap(t_node *pile);
void				ft_rotate(t_node *pile);
void				ft_reverse_rotate(t_node *pile);

#endif

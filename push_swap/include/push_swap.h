/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:54 by amennad           #+#    #+#             */
/*   Updated: 2023/08/31 16:05:15 by amennad          ###   ########.fr       */
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
	int				index;
	struct s_node	*next;
}					t_node;

// FN DEV DELETE LATER
void				print_pile(t_node *pile);
int					nb_str(char *str, char c);
void				print_pile_index(t_node *pile);

// UTILS
void				ft_exit(int status);
int					ft_int_array_len(int *nb);
void				ft_putstr(char *s);
int					size_pile(t_node *pile);
void				index_more_small(t_node *pile, int *min, int size);

// PARSING
t_node				*check_arg(int argc, char *argv[], t_node *pile);
int					has_valid_arg(char *value);
int					ft_atoi_p(char *str);
t_node				*ft_split_atoi(char *s, char sep, t_node *pile);
void				has_duplicate_pile(t_node *pile);
int					is_sorted(t_node *pile);

// CHAIN LIST
int					is_empty(t_node *pile);
t_node				*ft_push(t_node *pile, int item);
int					ft_pop(t_node *pile);
// void				ft_swap(t_node *pile);

// INSTRUCTIONS
void				ft_push_pile(t_node **pile_cut, t_node **pile_add,
						char *pile_name);
void				ft_swap_pile(t_node *pile, char *pile_name);
void				ft_swap_ss(t_node *pile_a, t_node *pile_b);
void				ft_rotate_pile(t_node *pile, char *pile_name);
void				ft_rotate_rr(t_node *pile_a, t_node *pile_b);
void				ft_reverse_rotate_pile(t_node **pile, char *pile_name);
void				ft_reverse_rotate_rrr(t_node **pile_a, t_node **pile_b);

// EXECUTE INSTRUCTION & SORT
void				execute_instruction(t_node *pile_a, t_node *pile_b);
void				three_sort(t_node *pile_a);
void				four_sort(t_node *pile_a, t_node *pile_b, int size_list);
void				five_sort(t_node *pile_a, t_node *pile_b, int size_list);
void				bubble_sort(int arr[], int n);
void				call_buble_sort(t_node *pile_a, int size_pile_a);
void				radix_sort(t_node **stack_a, t_node **stack_b);

#endif

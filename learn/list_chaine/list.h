
#ifndef LIST_H
# define LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

enum				e_boolean
{
	FALSE,
	TRUE
};

typedef struct s_list
{
	int				data;
	struct s_list	*next;
} t_list,	*t_ptr_list;

// typedef struct s_first_node
// {
// 	s_list	*first;
// }	t_first_node;

t_list				*create_first_node(int content);
t_list				ft_lstadd_front(t_list *lst, int new);

#endif
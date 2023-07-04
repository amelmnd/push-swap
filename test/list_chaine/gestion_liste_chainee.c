
#include "list.h"

/**
 * @brief create first node
 *
 * @param content
 * @return t_list*
 */
t_list	*create_first_node(int content)
{
	t_list			*new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		exit(EXIT_FAILURE);
	new_node->data = content;
	new_node->next = NULL;
	return (new_node);
}

t_list	ft_lstadd_front(t_list *list, int new)
{
	t_list			*new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		exit(EXIT_FAILURE);
	new_node->data = new;
	
	if (list == NULL)
		new_node->next = NULL;
	else
		new_node->next = list;
	return (*new_node);
}

#include "list.h"

enum e_boolean	is_empty_list(t_ptr_list li)
{
	if (li == NULL)
		return (TRUE);
	return (FALSE);
}

void	print_list(t_ptr_list li)
{
	if (is_empty_list (li))
	{
		printf("Rien a afficher, la Liste est vide.\n");
		return ;
	}
	while (li != NULL)
	{
		printf("[%d] ", li->data);
		li = li->next;
	}
	printf("\n");
}

int	main(int c, char *v[])
{
	t_list	pile_a;
	
	pile_a.data = NULL;
	pile_a = ft_lstadd_front(&pile_a, 1);
	pile_a = ft_lstadd_front(&pile_a, 10);
	pile_a = ft_lstadd_front(&pile_a, 100);
	pile_a = ft_lstadd_front(&pile_a, 1000);
	print_list(&pile_a);
	return (0);
}

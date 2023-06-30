#include "list.h"

int	main(int c, char *v[])
{
	t_list	pile_a;
	pile_a = ft_lstadd_front(&pile_a, 25);
	printf("%d\n", pile_a.data);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int	main (void)
{
	//creer une pile
	Stack sta = new_stack();


	//check contenu de la pile
	// if (is_empty_stack(sta))
	// 	printf("la pile est vide\n");
	// else
	// 	printf("la pile a des elements\n");
	print_stack(sta);
	sta = push_stack(sta, 14);
	sta = push_stack(sta, 47);
	sta = push_stack(sta, 23);
	sta = push_stack(sta, 31);

	// if (is_empty_stack(sta))
	// 	printf("la pile est vide\n");
	// else
	// 	printf("la pile a des elements\n");

	print_stack(sta);
	printf("\n---------\n");

	sta = pop_stack(sta);
	print_stack(sta);
	printf("\n---------\n");
	sta = pop_stack(sta);
	print_stack(sta);
	printf("\n---------\n");
	sta = clear_stack(sta);
	print_stack(sta);
	printf("\n---------\n");

	// if (is_empty_stack(sta))
	// 	printf("la pile est vide\n");
	// else
	// 	printf("la pile a des elements\n");

	return (0);
}
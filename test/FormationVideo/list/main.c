#include "list.h"

int	main(void)
{
	List mylist = new_list();

	print_list(mylist);
	mylist = push_back_list(mylist, 36);
	print_list(mylist);
	printf("---------push_back_list--------\n");
	mylist = push_back_list(mylist, 87);
	print_list(mylist);
	printf("-------push_back_list----------\n ");
	mylist = push_back_list(mylist, -4);
	print_list(mylist);
	printf("-----------------\n ");
	printf("taille de la liste : %d\n", list_length(mylist));
	printf("---------pop_back_list--------\n ");
	mylist = pop_back_list(mylist);
	print_list(mylist);
	printf("---------pop_front_list--------\n ");
	mylist = pop_front_list(mylist);
	print_list(mylist);
	mylist = pop_front_list(mylist);
	print_list(mylist);
	return (0);
}
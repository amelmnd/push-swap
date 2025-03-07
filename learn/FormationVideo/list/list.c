
#include "list.h"

List	new_list(void)
{
	return (NULL);
}

int	is_empty_list(List li)
{
	if (li == NULL)
		return (1);

	return (0);
}

//compter le  nombre d'element
int	list_length(List li)
{
	int	size;

	size = 0;
	if (is_empty_list(li) == 0)
	{
		while (li != NULL)
		{
			size++;
			li = li->next;
		}
	}
	return (size);
}

void	print_list(List li)
{
	if (is_empty_list(li))
	{
		printf("la liste est vide\n");
		return ;
	}
	while (li != NULL)
	{
		printf("[%d]\n", li->value);
		li = li->next;
	}
	printf("\n");
}

//Ajouter un element en debut de liste  a l'extremite NULL
List	push_back_list(List li, int x)
{
	// creation d'un nouvelle element
	ListElement	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return (NULL);
	element->value = x;
	element -> next = NULL;
	// ajout de l'element a la chaine
	if (is_empty_list(li))
		return (element);
	ListElement *temp;
	temp = li;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = element;
	return (li);
}

//Ajouter un element avant debut de liste  a l'extremite NON NULL (element > 1)
List	push_front_list(List li, int x)
{
	ListElement	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return (NULL);
	element->value = x;
	if (!is_empty_list(li))
		element->next = NULL;
	else
		element->next = li;

	return (element);
}

// Supprimer le derniere element de la liste (cote NULL)
List	pop_back_list(List li)
{
	ListElement	*temp;
	ListElement	*before;

	if (is_empty_list(li))
		return (new_list());
	if (li -> next == NULL)
	{
		printf("<%d>\n", li-> value);
		return (new_list());
	}
	else
	{
		temp = li;
		before = li;
		while (temp->next != NULL)
		{
			before = temp;
			temp = temp->next;
		}
		printf("<%d>\n", temp-> value);
		before->next = NULL;
	}
	return (li);
}

//Supprimer le premiere element de la liste (cote non NULL)
List	pop_front_list(List li)
{
	ListElement	*element;

	if (is_empty_list(li))
		return (new_list());
	element = malloc(sizeof(*element));
	if (!element)
		return (NULL);
	printf("(%d)\n", li-> value);
	element = li->next;
	return (element);
}



#include <stdio.h>
#include "list.h"

int main() {
	printf("Tests for linked list implementation:\n");
  
    
	list_t *my_list = list_alloc();
  
	list_add_to_front(my_list,24);
    list_print(my_list);
    
	list_add_to_front(my_list,92);
    list_print(my_list);
    
	list_add_to_back(my_list,1);
    list_print(my_list);
    
	list_add_to_back(my_list,65);
    list_print(my_list);
    
	list_add_at_index(my_list,3,98);
    list_print(my_list);
    
	list_add_to_back(my_list,45);
    list_print(my_list);
  
	elem my_elem1 = list_remove_from_front(my_list);
    list_print(my_list);
    
	elem my_elem2 = list_remove_at_index(my_list, 2);
    list_print(my_list);
    
	elem my_elem3 = list_remove_from_back(my_list);
    list_print(my_list);
	
	int len = list_length(my_list);
	printf("\nThe length of the list is: %d.\n", len);
	
	elem val = 10;
	bool is_in = list_is_in(my_list, val);
	if (is_in)
    {
		printf("%d is in list.\n", val);
	} else 
    {
		printf("%d is not in list.\n", val);
	}
	
    
	int ind = 5;
	elem my_elem4 = list_get_elem_at(my_list, ind);
	printf("Element at index %d is: %d. \n", ind, my_elem1);
	
    
	elem my_elem5 = 5;
	int ind2 = list_get_index_of(my_list,e5);
	printf("Element %d is at index: %d. \n", my_elem5, ind2);

	list_free(my_list);
	return 0;
}

 

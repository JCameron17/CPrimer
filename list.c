//Linked list in C programming
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

list_t *list_alloc()
{
    list_t *new_list; 
    new_list = malloc(sizeof(list_t));
    new_list->head = NULL;
    return new_list;
}


void list_free(list_t *new_list) {
    if (new_list == NULL){
        return; //if list is empty return list
    }
  
    node_t *temp = new_list->head;
    node_t *n = NULL;
  
    while (temp != NULL)
    {
        n = temp->next;
        free(temp); //remove value from temp 
        temp = n; //assign null to next 
    }
  
    new_list->head = NULL;
    free(new_list); //print empty list 
}


void list_print(list_t *new_list) {
    node_t *temp = new_listtemp
    node_t *n = NULL;
  
    while (temp->next != NULL) //while next not empty 
    {
        printf("%d -> ", temp->value); //print value of node
        n = temp->next;
        temp = n;
    }
  
	printf("%d", temp->value);
	printf("\n");
}


int list_length(list_t *l) { 
    node_t *temp = l->head; //assign var to head to count
  
    int count = 0; //create variable for length
  
    while (temp != NULL)
    {
        count++; //increment count
        temp = temp->next; 
    }
    return count; 
}


void list_add_to_back(list_t *l, elem value) {
    node_t *n = malloc(sizeof(node_t)); //create new node 
    n->value = value; //assign value to node 
    n->next = NULL; 
    node_t *temp = l->head;
  
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
  
    temp->next = n; //append node to end of list
}


void list_add_to_front(list_t *l, elem value) {
    node_t *n = malloc(sizeof(node_t)); //create new node 
    n->value = value;
    n->next = l->head; 
	l->head = n; //point node to head 
}

void list_add_at_index(list_t *l, elem value, int index) 
{
    int count = 1;
    node_t *n = malloc(sizeof(node_t)); //create new node 
    n->value = value; //assign value to node 
    n->next = NULL;
    node_t * temp = l->head;
    node_t* next_n = NULL;
  
    while (temp != NULL && count < (index))
    {
        count++;
        next_n = temp->next;
        temp = next_n;
    }
  
    next_n = temp->next;
    temp->next = n;
    n->next = next_n;
}

 
elem list_remove_from_back(list_t *l) 
{ 
    node_t *prev = l->head;
	node_t *temp = prev->next;
  
    while (temp->next != NULL)
    {
		prev = temp;
        temp = temp->next;
    }
  
	prev->next = NULL; 
    elem value = temp->value;
    free(temp); //remove value from node 
    return value; 
}


elem list_remove_from_front(list_t *l) { 
    node_t *temp = l->head; //temp points to head 
    l->head = temp->next;
    elem value = temp->value;
  
    free(temp); //remove value from node 
    return value;
}

elem list_remove_at_index(list_t *l, int index)
{ 
    int cnt = 0;
    node_t *prev = l->head;
    node_t *temp = prev->next;
  
    while (temp->next != NULL && count < (index - 1))
    {
        count++;
		prev = temp;
        temp = temp->next;
    }
  
    node_t *temp = temp;
    prev->next = temp->next;
    elem value = temp->value;
    free(temp);
    return value;
}

bool list_is_in(list_t *l, elem value) 
{
    bool is_in;
    node_t *temp = l->head;
  
    while (temp->next != NULL && !exist)
    {
		if (temp->value == value){ //if value is found return true 
			is_in = true;
		}
        temp = temp->next;
    }
  
    return is_in; 
}


elem list_get_elem_at(list_t *l, int index) {
	int cnt = 0;
	elem value = 0;
	node_t *temp = l->head;
  
    while (temp->next != NULL && cnt < (index))
    {
		cnt++;
        temp = temp->next;
    }
  
	if (temp != NULL){
		value = temp->value;
	}
  
	return value;
  
}

int list_get_index_of(list_t *l, elem value) 
{
	int cnt = 0;
	node_t *temp = l->head;
  
    while (temp->next != NULL)
    {
		if (temp->value == value)
        {
			return cnt;
		} else 
        {
			cnt++;
			temp = temp->next;
		}
    }
  
	return cnt; 
}

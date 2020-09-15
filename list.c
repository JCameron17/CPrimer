// list/list.c
// 
// Implementation for linked list.
//
// <Author>

#include <stdio.h>

#include "list.h"

list_t *list_alloc() {
  return malloc(sizeof(list_t)); 
  return NULL; 
}

void list_free(list_t* l) { free(l); }

void list_print(list_t *l) {
  struct node *temp;
   if (l == NULL) {
      printf("Empty List");
      return;
   }
   temp = l;
   while (temp != NULL) {
      printf("%d ", temp->data);
      temp = temp->next;
   }
}

int list_length(list_t *l) { 
  struct Node* head
  struct Node* current = head;  // Initialize current 
  while (current != NULL) 
   { 
      if (current->key == x) 
        return true; 
      current = current->next; 
    } 
  return -1; 
}

void list_add_to_back(list_t *l, elem value) {
    struct Node** head_ref;
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    struct Node *last = *head_ref;  /* used in step 5*/
    new_node->data  = value; 
    new_node->next = NULL; 
    
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    }   
       
    while (last->next != NULL) 
        last = last->next; 
   
    last->next = new_node; 
    return;   
}

void list_add_to_front(list_t *l, elem value) {
    struct node *head;
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = value; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
}

void list_add_at_index(struct Node* prev_node, int value) {
{     
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));  
    new_node->data = value;  
    new_node->next = prev_node->next;  
    prev_node->next = new_node;  
}

elem list_remove_from_back(list_t *l) { return -1; }
  
elem list_remove_from_front(list_t *l) { 
}
  
elem list_remove_at_index(list_t *l, int index) { return -1; }

bool list_is_in(list_t *l, elem value) {  return l->head->next; }
elem list_get_elem_at(list_t *l, int index) { 
   int key;
   struct node *newnode;
   struct node *head;
   index = 0;
   newnode = head;
   while (newnode != NULL && newnode->data != key) {
      index++;
      newnode = newnode->next;
   }
   return (newnode != NULL) ? index : -1;
  return -1; }
int list_get_index_of(list_t *l, elem value) { return -1; }

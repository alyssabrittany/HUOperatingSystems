#include <stdio.h>
#include <stdlib.h>

#include "list.h"


int main() {
  
  printf("Tests for linked list implementation\n");
  list_t *mylist = list_alloc();
  
  
  printf("Adding 10 to the front of the list: ");
  list_add_to_front(mylist,10);
  list_print(mylist);
  printf("Adding 23 to the front of the list: ");
  list_add_to_front(mylist,23);
  list_print(mylist);
  printf("Adding 17 to the front of the list: ");
  list_add_to_front(mylist,17);
  list_print(mylist);
  printf("Adding 62 to the front of the list: ");
  list_add_to_front(mylist,62);
  list_print(mylist);
  
  
  printf("Adding 61 to the back of the list: ");
  list_add_to_back(mylist,61);
  list_print(mylist);
  printf("Adding 12 to the back of the list: ");
  list_add_to_back(mylist,12);
  list_print(mylist);
  printf("Adding 11 to the back of the list: ");
  list_add_to_back(mylist,11);
  list_print(mylist);
  printf("Adding 7 to the back of the list: ");
  list_add_to_back(mylist,7);
  list_print(mylist);
  
  printf("Length of list is now: ");
  printf("%d",list_length(mylist));
  printf("\n");
  
  printf("Adding 12 at index 2");
  list_add_at_index(mylist,12,2);
  list_print(mylist);
  printf("Adding 74 at index 3");
  list_add_at_index(mylist,74,3);
  list_print(mylist);
  printf("Adding 1 at index 1");
  list_add_at_index(mylist,1,1);
  list_print(mylist);
  printf("Adding 122 at index 5");
  list_add_at_index(mylist,12,2);
  list_print(mylist);
  
  printf("Length of list is now: ");
  printf("%d",list_length(mylist));
  printf("\n");
  
  
  printf("Removing last element from list: ");
  list_remove_from_back(mylist);
  list_print(mylist);
  printf("Removing first element from list: ");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("Removing element at index 2: ");
  list_remove_at_index(mylist,2);
  list_print(mylist);
  printf("Removing last element from list: ");
  list_remove_from_back(mylist);
  list_print(mylist);
  printf("Removing first element from list: ");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("Removing element at index 4: ");
  list_remove_at_index(mylist,4);
  list_print(mylist);
  printf("Removing last element from list: ");
  list_remove_from_back(mylist);
  list_print(mylist);
  printf("Removing first element from list: ");
  list_remove_from_front(mylist);
  list_print(mylist);
  
  
  printf("Length of list is now: ");
  printf("%d",list_length(mylist));
  printf("\n");
  
  
  printf("Is 61 in the list? ");
  bool x = list_is_in(mylist,61);
  printf("%s", x ? "true" : "false");
  printf("\n");
  printf("Is 16 in the list? ");
  x = list_is_in(mylist,16);
  printf("%s", x ? "true" : "false");
  printf("\n");
  
  printf("Element at index 1: ");
  printf("%d",list_get_elem_at(mylist,1));
  printf("\n");
  printf("Element at index 3: ");
  printf("%d",list_get_elem_at(mylist,3));
  printf("\n");
  printf("Index of 61? ");
  printf("%d",list_get_index_of(mylist,61));
  printf("\n");
  printf("Index of 23? ");
  printf("%d",list_get_index_of(mylist,23));
  printf("\n");
   
 
  
  
  
}
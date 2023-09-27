#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;

node *head = NULL;

void insert(int data) {
  node *new_node = malloc(sizeof(node));
  new_node->data = data;
  new_node->next = NULL;

  if (head == NULL) {
    head = new_node;
  } else {
    node *current = head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = new_node;
  }
}

node* search(int data) {
  node *current = head;
  while (current != NULL) {
    if (current->data == data) {
      return current;
    }
    current = current->next;
  }
  return NULL;
}

int main() {
  insert(10);
  insert(20);
  insert(30);
  insert(50);

  node *found_node = search(50);

  if (found_node != NULL) {
    printf("The node containing the data 50 was found.\n");
  } else {
    printf("The node containing the data 50 was not found.\n");
  }

  return 0;
}

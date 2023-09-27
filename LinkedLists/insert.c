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

void print() {
  node *current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main() {
  insert(10);
  insert(20);
  insert(30);
  // insert(400);

  print();

  return 0;
}

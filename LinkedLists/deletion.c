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

void delete(int data) {
  node *current = head;
  node *previous = NULL;

  while (current != NULL && current->data != data) {
    previous = current;
    current = current->next;
  }

  if (current == NULL) {
    return;
  }

  if (previous == NULL) {
    head = current->next;
  } else {
    previous->next = current->next;
  }

  free(current);
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

  print();

  delete(10);

  print();

  return 0;
}

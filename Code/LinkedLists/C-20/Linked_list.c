#include <stdio.h>


typedef struct student_st {
  char *name;
  float score;
} student;

typedef struct linked_node_st {
  student stud;
  struct linked_node_st *next;
} linked_node;

int main(void)
{
  student stud1 = {"Amanuel", 80};
  student *ptr_stud = &stud1;

  printf("name: %s\n", stud1.name);
  printf("name: %s\n", (*ptr_stud).name);
  printf("name: %s\n", ptr_stud->name);

  student stud2 = {"ALX", 100};
  linked_node node1;
  node1.stud = stud1;

  linked_node node2;
  node2.stud = stud2;

  // node1 next should point to node2                                                                                                                                                                                                                                   
  node1.next = &node2;
  node2.next = NULL; // why? the last node so that we know                                                                                                                                                                                                              
                     // when to stop iterating                                                                                                                                                                                                                          


  printf("node1.stud  %s\n", node1.stud.name);
  printf("node2.stud  %s\n", node2.stud.name);
  // linked_node next_node = node1->next;                                                                                                                                                                                                                               
  // we should the -> when we try to access the element from a pointer                                                                                                                                                                                                  
  // a is a pointer to a structure                                                                                                                                                                                                                                      
  // a->stud -> a pointer to the structure variable                                                                                                                                                                                                                     
  // a.stud -> if a is a variable containing                                                                                                                                                                                                                            
  linked_node *next_node = node1.next;
  printf("node2 by using node1 %s\n", next_node->stud.name);

  linked_node *temp_ptr = &node1;
  while (temp_ptr)
    {
      printf("This is from the loop %s, %f\n", temp_ptr->stud.name, temp_ptr->stud.score);
      temp_ptr = temp_ptr->next;
    }
  return (0);

}
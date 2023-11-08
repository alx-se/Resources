#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * LinkedList
 * struct LinkedList {
 *    int  value;
 *    sturct LinkedList *nextNode;
 * }
 * They allow us to allocate a memory when ever we ne
 */
typedef char c;
typedef unsigned int int_p;
// typedef struct Engineer Eng_s;

typedef struct Engineer {
  c *name; // "Name"
  int num_programming_lang;
  char grade; // A, B
} Eng_s;


// typedef struct Engineer Eng_s;
/**
 * Create a function that accepts, name, num, grade
 * Return -> a pointer to the struct that we created
 */

Eng_s *createEngineer(char *name, int_p num, char grade)
{
  Eng_s *engineer;

  // "ABC" -> strlen("ABC") = 3
  // [A, B, C, '\0']
  //engineer = malloc(sizeof(Eng_s));
  //if (!engineer)
  //return (NULL);

  // engineer->name = malloc(sizeof(char) * (strlen(name) + 1));

  if (!engineer->name)
    return (NULL);

  engineer->grade = grade;
  engineer->num_programming_lang = num;

  //for (int i = 0; i < strlen(name); i++)
  //  engineer->name[i] = name[i];
  //engineer->name[strlen(name)] = '\0';
  engineer->name = name;

  return engineer;
}




int main(void)
{
  int x = 4;
  Eng_s *engineer = createEngineer("ALX_Engineer", x, 'A');
  //Eng_s *ptrEng;

  //ptrEng = &engineer;
  
  
  // engineer->num_programming_lang = 6;
  printf("name: %s\n", engineer->name);
  printf("Num programming language: %d\n", engineer->num_programming_lang);
  // printf("Name from ptr: %s and %s\n", ptrEng->name, (*ptrEng).name);

  return (0);
}

#include <stdio.h>
#include <stdlib.h>

typedef struct learner
{
  char *name;
  char *userName;
  float averageScore;
} leanrerSt;

/* create a function that takes name userName averageScore and creates
   a learner structure and returns it*/

struct learner *createLearner(char *name, char *userName, float avg)
{
  leanerSt *learner1;

  learner1 = malloc(sizeof(struct learner) * 1); 
  
  if (avg < 0 || avg > 100)
    return (NULL);


  learner1->name = name;
  learner1->userName = userName;
  learner1->averageScore = avg;

  return learner1;
  
}

typedef char ch;
typedef struct learner learner_st;

int main(void)
{
  ch *name = "Amanuel";
  char *name2 = "Amanuel";
  int number = 0;
  learner_st learner2 = {"Amanuel", "amanuel12345", 89};
  struct learner *learner3 = createLearner("learner1", "userName", 67);
  struct learner *ptrLearner;
  ptrLearner = &learner2;
  printf("printing from ptr to structure\n");
  printf("ptr-name: %s\n", (*ptrLearner).name);
  printf("ptr-userName: %s\n", ptrLearner->userName);
  
  printf("name: %s\n", learner3->name);
  printf("userName: %s\n", learner3->userName);
  printf("AverageScore: %f\n", learner3->averageScore);
  
  return (0);
}

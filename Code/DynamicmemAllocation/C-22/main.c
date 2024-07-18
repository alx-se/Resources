#include <stdio.h>
#include <stdlib.h>

char *duplicate_char(char letter, int length)
{
  char *duplicate;
  duplicate = malloc(sizeof(char) * (length + 1));

  /** to check if the memory is allocated correctly */
  if (duplicate == NULL)
    return (NULL);

  int i = 0;
  while (i < length)
    duplicate[i++] = letter;

  duplicate[i] = '\0';

  return duplicate;
}

/**                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
 * Now I want us to create a function that multiplies a string                                                                                                                                                                                                                                                                                                                                                                                                                                        
 * mulitiply_str("ALX", 3) -> "ALXALXALX"                                                                                                                                                                                                                                                                                                                                                                                                                                                             
 * multiply_str("ALX", 5) -> "ALXALXALXALXALX"                                                                                                                                                                                                                                                                                                                                                                                                                                                        
 */

char *multiply_str(const char *data, int times)
{
  /** int length = strlen(data); */
  int length = 0;
  while(data[length] != '\0')
    length++;

  char *dup_data;
  dup_data = malloc(sizeof(char) * ((length * times) + 1));

  if (dup_data == NULL)
    return (NULL);


  int i;
  for (i = 0; i < length * times; i++)
    dup_data[i] = data[i % length];
  /**                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
     012                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
   * ALX                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
   * length = 3                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
   * i = 5                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
   * ALXALX                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
   * 012345678                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
   */
  dup_data[i] = '\0';
  return dup_data;
}

/**                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
 * Assumptions: We allways have 2 or more words                                                                                                                                                                                                                                                                                                                                                                                                                                                       
 * Each word is separated by a single space                                                                                                                                                                                                                                                                                                                                                                                                                                                           
 * We don't have any space at the begining and the ending                                                                                                                                                                                                                                                                                                                                                                                                                                             
 */
char **split_with_space(char *str)
{
  char **array_str;
  int count_strn = 1;
  for(int i = 0; i < strlen(str); i++)
  {
    // count how many words we have                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    count_str++;
  }


}

int main(void)
{
  char *str = duplicate_char('A', 7);
  char *str2 = duplicate_char('S', 100);
  printf("%s\n", str);
  printf("100S, %s\n", str2);

  char *str3 = multiply_str("ALX", 3);
  char *str4 = multiply_str("Aman", 7);

  printf("%s\n", str3);
  printf("%s\n", str4);

  free(str);
  free(str2);
  free(str3);
  free(str4);
  return (0);
}

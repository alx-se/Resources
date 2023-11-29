/**                                                                                                                                                                                                                
11;rgb:0000/0000/0000* Variadic function                                                                                                                                                                           
 * function pointers or switch statement or if else                                                                                                                                                                
                                                                                                                                                                                                                   
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**                                                                                                                                                                                                                
 * We want to take format                                                                                                                                                                                          
 * From the format we are going to determine they type of the argument                                                                                                                                             
 * we are going to print it                                                                                                                                                                                        
 */


int print_str(char *str)
{
  int count = 0;
  while (*str != '\0')
  {
      putchar(*str);
      str++;
      count++;
  }

  return (count);
}

int print_int(int a)
{
  return (0);
}


/**                                                                                                                                                                                                                
 * format -> contains the format that is used to print                                                                                                                                                             
 */
int _printf(char *format, ...)
{
  va_list args;
  int count = 0;

  va_start(args, format);
  while (*format != '\0')
  {
    // if we find a percentage we want to determine the input                                                                                                                                                      
    // based on the next character that we are going to find                                                                                                                                                       
    if (*format == '%')
      {
        format++; // to move to the next char % -> s                                                                                                                                                               
        if (*format == 'c') {
          char s = va_arg(args, int);
          count += putchar(s);
        }
        else if (*format == 's') {

          char *str = va_arg(args, char*);
          count += print_str(str);
        }
        else if (*format == 'd' || *format == 'i')
          {
            int num = va_arg(args, int);
            count += print_int(num);
          }
        else {
          print_str("unIdentified formatter\n");
          return (-1);
        }
      }
    else {
      putchar(*format);
      count++;
    }
    format++;
  }

  va_end(args);
  return (count);
}

int main(void)
{
  printf("This is trial\n");
  printf("This is number %d\n", 12);
  printf("This is a name %s\n", "ALX");
  printf("This is a character %c\n", 97);
  //printf("fsdhfasdhfasdfadf%");                                                                                                                                                                                  
  printf("%%");

  printf("This is the result of custom printf\n");
  _printf("This is trial\n");
  _printf("This is number %d\n", 12);
  _printf("This is a name %s\n", "ALX");
    _printf("This is a character %c\n", 97);

  return (0);
}

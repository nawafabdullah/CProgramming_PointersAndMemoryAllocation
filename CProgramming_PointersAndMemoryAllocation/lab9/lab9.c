/* Nawaf Alharbi
/CSCI330
Lab9
*/

#include <stdio.h>
#include <stdarg.h>


void PrintLongs(int numArgs, ...);

int main ()
{

  // since we did not specify which type to assign to the long, the long will assume integer type 
  long first = 566;
  long second = 12;
  long third = 3;
  long fourth = 2002;
  long fifth = 5024;

  
  printf ("\n\ncalling the function with one parameter \n performing the following fuction call: PrintLongs(566) \n the result is: ");
  PrintLongs(1, first); 

  printf ("calling the function with two parameters \n performing the following fuction call: PrintLongs(566, 12) \n the result is: ");
  PrintLongs(2, first,second);

  printf ("calling the function with five parameters \n performing the following fuction call: PrintLongs(566, 12, 3, 2002, 5024) \n the result is: ");
  PrintLongs(5, first,second,third,fourth,fifth);

}


void PrintLongs(int numArgs, ...)
{
  va_list argList;
  va_start(argList, numArgs);

  printf (" The result is: \n");
  for (int i = 0; i < numArgs; i++)
    {
      long value = va_arg(argList,long);
      printf (" argument number %d is %ld \n", i+1, value);
    }
  
  printf ("\n \n \n");
  va_end(argList);
}


// Nawaf Alharbi
// Lab 6
// CSCI 330

/* Note: you can recreate the file Results.txt by using make again */ 



#include <stdio.h>
#include <stdlib.h>


unsigned int *addrs;

const int GlobalConst = 0;
int GlobalVar = 1;


void Print_Out_Ptr (unsigned int test_subject_ptr, unsigned int *test_subject_ptr_addrs)
{
  printf (" the value stored is %d \n the memory address is %p \n ", test_subject_ptr, test_subject_ptr_addrs );
  printf (" ========================================================================================= \n");

}



void Print_Out_Vars (unsigned int test_subject, unsigned int *test_subject_addrs)
{
  printf (" the value stored is %d \n the memory address is %p \n ", test_subject, test_subject_addrs );
  printf (" ========================================================================================= \n");

}



void f(int param)
{

   printf ("inside the f function, at the very begining, before doing anything, we are examing the argument count 'args', which was passed to the function as a param, the varible's type is an integer \n");
   addrs = &param;
   Print_Out_Vars (param, addrs);



   static int staticVar = 2;
   printf ("inside the f function, after declaring the -static varible - 'staticVar', the varible's type is an integer \n");
   addrs = &staticVar;
   Print_Out_Vars (staticVar, addrs);



   int localVar = 3;
   printf ("inside the f function, after declaring the -local varible - 'localVar', the varible's type is an integer \n");
   addrs = &localVar;
   Print_Out_Vars (localVar, addrs);



   int localConst = 4;
   printf ("inside the f function, after declaring the -local constant varible - 'localConst', the varible's type is an integer \n");
   addrs = &localConst;
   Print_Out_Vars (localConst, addrs);



   for (int loopVar = 5; loopVar <= 5; loopVar++) {

     printf ("inside the f function, inside the for loop, after declaring the -loop varible (counter) - 'loopVar', the varible's type is an integer \n");
     addrs = &loopVar;
     Print_Out_Vars (loopVar, addrs);



     const int loopConst = 6;
     printf ("inside the f function, inside the for loop, after declaring the -loop's constant varible - 'loopConst', the varible's type is an integer \n");
     printf (" the value stored is %d \n the memory address is %p \n ", loopConst, &loopConst);
     printf (" ========================================================================================= \n");

     
   }


   // printf ("inside the f function, AFTER the for loop, we are examining 'loopConst', the varible's type is an integer \n");
     //     addrs = &loopConst;
     //Print_Out_Vars (loopConst, addrs);


   int *ptr = (int*)malloc(param*sizeof(int));
   printf ("inside the f function, after declaring the -pointer - 'ptr', the varible's type is a pointer to an integer \n");
   addrs = &*ptr;
   Print_Out_Ptr (*ptr, addrs);


   if (ptr) {
      *ptr = 7;
   printf ("inside the f function, inside the if statment, we are TRYING TO  ALTER the -pointer - 'ptr', the varible's type is a pointer to an integer \n");
   addrs = &*ptr;
   Print_Out_Ptr (*ptr, addrs);
   }

   free(ptr);
   printf ("inside the f function, AFTER FREEING the -pointer - 'ptr', the varible's type is a pointer to an integer \n");
   addrs = &*ptr;
   Print_Out_Ptr (*ptr, addrs);
}



int main(int argc, char *argv[])
{

   printf (" at the beggining of main, we are examining the global varible 'GlobalVar', the varible's type is an integer \n");
   addrs = &GlobalVar;
   Print_Out_Vars (GlobalVar, addrs);



   printf (" at the beggining of main, we are examining the global -constant- varible 'GlobalConst', the varible's type is an integer \n");
   printf (" the value stored is %d \n the memory address is %p \n ", GlobalConst, &GlobalConst);
   printf (" ========================================================================================= \n");



  
   int mainVar = 8;
   printf (" at the beggining of main, - right after declaring the local varible - 'mainVar', the varible's type is an integer \n");
   addrs = &mainVar;
   Print_Out_Vars (mainVar, addrs);




   int mainConst = 9;
   printf (" at the beggining of main, - right after declaring the local constant varible - 'mainConst', the varible's type is an integer \n");
   addrs = &mainConst;
   Print_Out_Vars (mainConst, addrs);



   printf (" at the beggining of main, - right before calling function f - which takes the argument count as a parameter, we are examing the argument count 'args', the varible's type is an integer \n");
   addrs = &argc;
   Print_Out_Vars (argc, addrs);



   f(argc);
   printf (" in main, - right after calling function f - which takes the argument count as a parameter, we are examing the argument count 'args', the varible's type is an integer \n");
   addrs = &argc;
   Print_Out_Vars (argc, addrs);


   return 0;

}

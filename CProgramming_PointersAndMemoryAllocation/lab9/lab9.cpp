// Noah Alharbi
// CSCI330
// Lab 9 


#include <iostream>
#include <string> 
#include <initializer_list> 


template <typename T> 
void PrintLongs(T t)
{
  std::cout << t << std::endl ;
} 

template<typename T, typename... Args> 
void PrintLongs(T t, Args... args) // recursive variadic function 
{
  std::cout << t <<std::endl ;
  PrintLongs(args...) ;
} 


int main() 
{

 std::cout << "\nthis is test 1, the number of -1- argument has been passed to the function " << std::endl
           << "making the following function call: PrintLongs(2.5); " << std::endl
           << "the result is: \n";

 PrintLongs(2.5);
 std::cout << std::endl;


 std::cout << "this is test 2, the number of -2- arguments has been passed to the function " << std::endl
           << "making the following function call: PrintLongs(2.5, 15.3); " << std::endl
           << "the result is: \n";

 PrintLongs(2.5, 15.3);
 std::cout << std::endl;



 std::cout << "this is test 3, the number of -5- argument has been passed to the function " << std::endl
           << "making the following function call PrintLongs(2.5, 15.3, 105.9, 2002.4, 5020.6); " << std::endl
           << "the result is: \n";

 PrintLongs(2.5, 15.3, 105.9, 2002.4, 5020.6);
 std::cout << std::endl;



 std::cout << "this is test *, test * is an extra test to show the usefulness of using templates. i.e, we can pass the function printLongs a string, and it will still recieve, and process it " << std::endl
           << "making the following function call PrintLongs(2.5, 15.3, 105.9, 'i am a string between longs'); " << std::endl
           << "the result is: \n";

 PrintLongs(2.5, 15.3, 105.9,  "i am a string between longs");
 std::cout << std::endl;

}



#include "lab10.h"
template <class T>
void ssort(T arr[], int size, bool (*ptr )(T,T))
{
  for (int i = 0; i < (size-1); i++) {
      T min = arr[i];
      int pos = i;
      for (int j = i+1; j < size; j++) {
	if (!(*ptr) (min, arr[j])) {
	    min = arr[j];
            pos = j;
	     }
      }
       if (pos != i) {
	 swap(arr[i], arr[pos]);
       }
  }

}


template void ssort<float>(float arr[], int size, bool (*ptr) (float, float));
//template void ssort<float>(float arr[], int size, bool (*ptr) (int, int));
//template void ssort<float>(float arr[], int size, bool (*ptr) (string,string));
//template void ssort<char>(char arr[], int size, bool (*ptr) (char, char));






#include "BubbleSort.h"

/**
 * Bubble Sort
 * @param arr puntero de array
 * @param N cantidad de elementos del array
 */

void BubbleSort(int* arr, int N)
{
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N-1; j++)
    {
      if(arr[j] > arr[j+1])
      {
        std::swap(arr[j], arr[j+1]);
      }
    }
  }
}

int main(int argv, const char* argc[])
{
  int arr[5] = {5,4,3,2,1};
  BubbleSort(arr, 5);
  for(int i = 0; i < 5;i++)
  {
    std::cout << arr[i] << " ";
  }
  printf("\n");
  return 0;
}

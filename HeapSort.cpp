#include <iostream>

/**
 * @brief Funcion Heapify
 *
 * @param arr array entrante
 * @param V tamño del array
 * @param idx índice de la raíz
 */

void heapify(int arr[], int V, int idx)
{
    int root = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left <= V)
    {

    }

    if (right <= V)
    {

    }

    // Máximo entre los dos hijos del root
    
    root = (arr[left] > arr[right] ? left : right);

    // Si existió un hijo mayor que el root...
    if (root != idx)
    {
        std::swap(arr[root], arr[idx]);
        heapify(arr, V, root);
    }

    // Referencia: Inspirado de https://www.geeksforgeeks.org/heap-sort/
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    heapify(arr, n, 2);

    return 0;
}
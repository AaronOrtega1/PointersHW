//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *collection, int count)
{
    int swapMade = 0;
    // array utilizado {-2, 45, 0, 11, -9}
    for (int i = 0; i < count; i++) {
        // checar los elementos del array, limitado para no checar el ultimo elemento con el que sigue
        for (int j = i; j < count; j++) {
            // condicional para checar si es mayor un elemento que el otro
            if(*(collection + i) > *(collection + j)) {
                // swap de elementos
                swapMade++;
                int temp = *(collection + j);
                *(collection + j) = *(collection + i);
                *(collection + i) = temp;
            }
        }
    }
    return swapMade;
}

void insertion_sort(int *collection, int count)
{
    for (int i = 1; i <= count; i++) {
        int temp = *(collection + i);
        int j = i - 1;

        while (temp < *(collection + j) && j >= 0) {
            *(collection + (j + 1)) = *(collection + j);
            j--;
        }
        *(collection + (j + 1)) = temp;
    }
}

void reverse(int *collection, int count)
{
    int aux[count];
    for (int i = 0; i < count; i++) {
        aux[count - 1 - i] = *(collection + i);
    }
    for (int i = 0; i < count; i++) {
        *(collection + i) = aux[i];
    }
}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}

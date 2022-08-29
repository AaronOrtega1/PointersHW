//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *collection, int count)
{
    // array utilizado {-2, 45, 0, 11, -9}
    for (int i = 0; i < count; i++) {
        // checar los elementos del array, limitado para no checar el ultimo elemento con el que sigue
        for (int j = 0; j < (count - 1); j++) {
            // condicional para checar si es mayor un elemento que el otro
            if(collection[j] > collection[j + 1]) {
                // swap de elementos
                int temp = *(collection + i);
                *(collection + i) = *(collection + (j + 1));
                *(collection + (j + 1)) = temp;
            }
        }
    }

    // imprimir los elementos despues de el ciclo dentro de la función (Solo para checar)
    for (int k = 0; k < count; k++) {
        printf("from bubbleSort collection[%d] = %d\n", k, *(collection + k));
    }
    return 0;
}

void insertion_sort(int *collection, int count)
{

}

void reverse(int *collection, int count)
{

}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("from printArray array[%d] = %d\n", i, array[i]);
    }
}

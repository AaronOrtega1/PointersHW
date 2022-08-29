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

    // imprimir los elementos despues de el ciclo dentro de la función (Solo para checar)
    for (int k = 0; k < count; k++) {
        printf("from bubbleSort collection[%d] = %d\n", k, *(collection + k));
    }
    return swapMade;
}

void insertion_sort(int *collection, int count)
{
    for (int i = 1; i < count; i++) {
        int temp = collection[i];
        int j = i - 1;

        while (j >= 0 && *collection + j > temp) {
            *(collection + (j + 1)) = *collection + j;
            j = j - 1;
        }
        *(collection + (j + 1)) = temp;
    }

    for (int k = 0; k < count; k++) {
        printf("from insertSort collection[%d] = %d\n", k, *(collection + k));
    }
}

void reverse(int *collection, int count)
{
    for (int i = 0; i < count; ++i) {
        for (int j = count - 1; j >= 0; ++j) {
            int temp = *(collection + i);
            *(collection + i) = *(collection + j);
            *(collection + j) = temp;
        }
    }

    for (int k = 0; k < count; k++) {
        printf("from reverse collection[%d] = %d\n", k, *(collection + k));
    }
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

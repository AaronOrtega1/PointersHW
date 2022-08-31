#include "pointers.h"

int main(void)
{
    int array[] = {-2, 45, 0, 11, -9};
    // int swaps = bubble_sort(array, 5); // (-9,-2,0,11,45);
    // insertion_sort(array,5); // (-9,-2,0,11,45);
    reverse(array, 5); // (-9, 11, 0, 45, -2)

    for (int i = 0; i < 5; i++) {
        printf("print from main - array[%d] = %d\n", i, array[i]);
    }
    return 0;
}

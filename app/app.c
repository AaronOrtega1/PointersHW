#include "pointers.h"

int main(void)
{
    int array[] = {-2, 45, 0, 11, -9, -2, -2};
    int lenght = sizeof array / sizeof array[0];
    int swaps = bubble_sort(array, lenght); // (-9,-2,0,11,45);
    for (int i = 0; i < lenght; i++) {
        printf("print from main - array[%d] = %d\n", i, array[i]);
    }
    printf("number of swaps: %d\n", swaps);
    // insertion_sort(array,lenght); // (-9,-2,0,11,45);
    // reverse(array, lenght); // (-9, 11, 0, 45, -2)
    int frequency = calulate_frequency(array,lenght,-2);
    printf("frequency times: %d", frequency);

    return 0;
}

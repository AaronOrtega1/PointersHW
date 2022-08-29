#include "pointers.h"

int main(void)
{
    int array[] = {-2, 45, 0, 11, -9}; // (-9,-2,0,11,45);
    bubble_sort(array, 5);
    printArray(array, 5);
    return 0;
}

//Renard Ali
//Mrs. Torosdagali
//Section 5
//3/8/2024

/*The total number of swaps are not equal to the sum of the swaps of each value
because during the sorting process, multiple elements may be swapped multiple times.
The total number of swaps accounts for all swaps made during the sorting algorithm's
execution, including those involving different elements. 
*/

#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp, swaps = 0;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
    }
    printf("Total number of swaps in Bubble Sort: %d\n", swaps);
}

void selectionSort(int arr[], int n)
{
    int i, j, min_index, temp, swaps = 0;
    for (i = 0; i < n-1; i++)
    {
        min_index = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        if (min_index != i)
        {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
            swaps++;
        }
    }
    printf("Total number of swaps in Selection Sort: %d\n", swaps);
}

void countSwapsBubbleSort(int arr[], int n)
{
    int i, j, count;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
        printf("%d: %d\n", arr[i], count);
    }
}

void countSwapsSelectionSort(int arr[], int n) {
    int i, j, count;
    for (i = 0; i < n-1; i++)
    {
        count = 0;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                count++;
            }
        }
        printf("%d: %d\n", arr[i], count);
    }
    // The last element has no elements to swap with, so its count is 0
    printf("%d: %d\n", arr[n-1], 0);
}

int main()
{
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);



    int array3[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array4[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size3 = sizeof(array3) / sizeof(array3[0]);
    int size4 = sizeof(array4) / sizeof(array4[0]);
    


    printf("array1 bubble sort:\n");
    countSwapsBubbleSort(array1, size1);
    bubbleSort(array1, size1);

    printf("\narray2 bubble sort:\n");
    countSwapsBubbleSort(array2, size2);
    bubbleSort(array2, size2);

    printf("\narray1 selection sort:\n");
    countSwapsSelectionSort(array3, size3);
    selectionSort(array3, size3);

    printf("\narray2 selection sort:\n");
    countSwapsSelectionSort(array4, size4);
    selectionSort(array4, size4);

    return 0;
}
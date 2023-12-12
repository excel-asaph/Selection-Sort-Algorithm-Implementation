#include "selectionsort.h"

/**
 * @file selectionsort.c
 * @brief Implementation of the Selection Sort algorithm.
 */

/**
 * @brief Sorts an array in ascending order using the Selection Sort algorithm.
 *
 * This function implements the Selection Sort algorithm to sort the input array in
 * ascending order.
 *
 * @param arr An array to be sorted.
 * @param n The size of the array.
 */
void selectionsort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int lowest_value = arr[i];
    int position = i;
    int temp;

    // Run through the array to find the lowest value
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        lowest_value = arr[j];
        position = j;
      }
    }

    // Switch here
    temp = arr[i];
    arr[i] = lowest_value;
    arr[position] = temp;
  }
}

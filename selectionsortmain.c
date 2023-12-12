#include "selectionsort.h"

#define SIZE 10

/**
 * @file selectionsortmain.c
 * @brief Test file for the Selection Sort algorithm.
 */

/**
 * @brief Main function for testing the Selection Sort algorithm.
 *
 * This function prompts the user to enter numbers, stores them in an array,
 * performs selection sort, and then prints the sorted array.
 *
 * @return 0 on successful execution.
 */
int main(void) {
  int arr[SIZE], n, exit;
  int count = 0;

  // Prompt user to enter numbers
  do {
    printf("Enter %d numbers to be sorted: ", SIZE);
    exit = scanf("%i", &n);
    arr[count] = n;
    ++count;
  } while (count < SIZE);

  // Perform Selection Sort
  selectionsort(arr, SIZE);

  // Print the sorted array
  for (int i = 0; i < SIZE; i++) {
    printf("%d", arr[i]);
    if (i < SIZE - 1) {
      printf(", ");
    }
  }
  printf("\n");

  return exit;
}

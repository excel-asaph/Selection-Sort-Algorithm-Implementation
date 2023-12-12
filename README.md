# Selection Sort Algorithm Implementation

This repository contains a C implementation of the Selection Sort algorithm. Selection Sort is a simple comparison-based sorting algorithm that divides the input array into a sorted and an unsorted region. The algorithm repeatedly selects the smallest (or largest) element from the unsorted region and swaps it with the first unsorted element.

## Table of Contents

- [Overview](#overview)
- [Usage](#usage)
- [File Descriptions](#file-descriptions)
- [Performance](#performance)
- [Contributing](#contributing)
- [License](#license)

## Overview

Selection Sort is a straightforward sorting algorithm with a time complexity of O(n^2) in the worst case. It is often inefficient on large datasets compared to more advanced algorithms. However, its simplicity makes it easy to understand and implement.

This implementation consists of three files:
- `selectionsort.h`: Header file declaring the Selection Sort function.
- `selectionsort.c`: Implementation of the Selection Sort algorithm.
- `selectionsortmain.c`: Test file to demonstrate the usage of Selection Sort.

## Usage

To use the Selection Sort algorithm, follow these steps:

1. Clone this repository:

```bash
git clone https://github.com/excel-asaph/Selection-Sort-Algorithm-Implementation.git
cd Selection-Sort-Algorithm-Implementation
```

2. Compile the program:

```bash
gcc selectionsortmain.c selectionsort.c -o selectionsort
```

3. Run the executable:

```bash
./selectionsort
```

# File Descriptions

## `selectionsort.h`

```c
#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <stdio.h>

/**
 * @file selectionsort.h
 * @brief Header file for the Selection Sort algorithm.
 */

/**
 * @brief Sorts an array in ascending order using the Selection Sort algorithm.
 *
 * @param arr An array to be sorted.
 * @param size The size of the array.
 */
void selectionsort(int arr[], int size);

#endif
```

## `selectionsort.c`

```c
#include "selectionsort.h"

/**
 * @file selectionsort.c
 * @brief Implementation of the Selection Sort algorithm.
 */

/**
 * @brief Sorts an array in ascending order using the Selection Sort algorithm.
 *
 * @param arr An array to be sorted.
 * @param n The size of the array.
 */
void selectionsort(int arr[], int n) {
  // Implementation details...
}
```

## `selectionsortmain.c`

```c
#include "selectionsort.h"

/**
 * @file selectionsortmain.c
 * @brief Test file for the Selection Sort algorithm.
 */

// Main function and usage details...
```

## Performance

Selection Sort has a time complexity of O(n^2) in the worst case, making it less suitable for large datasets. Its simplicity, however, makes it a good educational algorithm.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these steps:

1. Fork the repository
2. Create a new branch (`git checkout -b feature/new-feature`)
3. Make your changes and commit them (`git commit -am 'Add new feature'`)
4. Push to the branch (`git push origin feature/new-feature`)
5. Create a pull request

## License

This project is licensed under the MIT License - see the LICENSE file for details.

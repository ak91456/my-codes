/* Row-Major Order:
In row-major order, the elements of a multi-dimensional array are stored in contiguous memory rows. 
This means that consecutive elements in the same row are stored next to each other in memory. 
When iterating over the array, the elements within the same row are accessed sequentially, which can lead to better cache performance when processing consecutive elements.

Column-Major Order:
In column-major order, the elements of a multi-dimensional array are stored in contiguous memory columns.
this means that consecutive elements in the same column are stored next to each other in memory.
When iterating over the array, the elements within the same column are accessed sequentially.
 */
#include <iostream>
#include <iomanip>  // For setw()

const int ROWS = 3;
const int COLS = 4;

void fillRowMajor(int arr[ROWS][COLS]) {
    int counter = 1;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = counter++;
        }
    }
}

void fillColumnMajor(int arr[ROWS][COLS]) {
    int counter = 1;
    for (int j = 0; j < COLS; ++j) {
        for (int i = 0; i < ROWS; ++i) {
            arr[i][j] = counter++;
        }
    }
}

void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << std::setw(3) << arr[i][j] << " (" << &arr[i][j] << ")\t";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

int main() {
    int rowMajorArray[ROWS][COLS];
    int columnMajorArray[ROWS][COLS];

    fillRowMajor(rowMajorArray);
    fillColumnMajor(columnMajorArray);

    std::cout << "Row-Major Order:\n";
    printArray(rowMajorArray);

    std::cout << "Column-Major Order:\n";
    printArray(columnMajorArray);

    return 0;
}

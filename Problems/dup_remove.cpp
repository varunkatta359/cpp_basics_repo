#include <iostream>

// Function to remove duplicates from an array
int removeDuplicates(int arr[], int n) {
    // If the array has 0 or 1 elements, there are no duplicates
    if (n <= 1) {
        return n;
    }

    int writeIndex = 1;
    for (int readIndex = 1; readIndex < n; readIndex++) {
        bool isDuplicate = false;
        for (int i = 0; i < writeIndex; i++) {
            if (arr[readIndex] == arr[i]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            arr[writeIndex] = arr[readIndex];
            writeIndex++;
        }
    }

    // Return the new size of the array
    return writeIndex;
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Main function
int main() {
    int arr[] = {1, 7,5,5,1,6,4, 3, 4, 5,  6};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, n);

    n = removeDuplicates(arr, n);

    std::cout << "Array after removing duplicates: ";
    printArray(arr, n);

    return 0;
} 
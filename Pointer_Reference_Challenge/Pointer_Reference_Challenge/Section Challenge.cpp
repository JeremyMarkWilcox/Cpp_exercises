#include <iostream>

int* apply_All(const int* arr1, int size1, const int* arr2, int size2) {
    int* result = new int[size1 * size2];
    int pos = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            result[pos++] = arr1[i] * arr2[j];
        }
    }
    return result;
}

void print(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr1[] = { 1, 2, 3 };
    int arr2[] = { 4, 5, 6 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int* result = apply_All(arr1, size1, arr2, size2);
    int resultSize = size1 * size2;

    print(result, resultSize);

    delete[] result; // Don't forget to free the allocated memory
    return 0;
}

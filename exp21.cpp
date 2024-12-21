#include <iostream>
using namespace std;

// Template function to sort an array
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to print an array
template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int arrSize = 6;
    int intArr[arrSize] = {30, 10, 20, 60, 50, 40};
    cout << "Before sorting (int array): ";
    displayArray(intArr, arrSize);
    sortArray(intArr, arrSize);
    cout << "After sorting (int array): ";
    displayArray(intArr, arrSize);

    long long llArr[arrSize] = {7000000001LL, 3000000002LL, 8000000005LL, 1000000009LL, 4000000004LL, 2000000006LL};
    cout << "\nBefore sorting (long long array): ";
    displayArray(llArr, arrSize);
    sortArray(llArr, arrSize);
    cout << "After sorting (long long array): ";
    displayArray(llArr, arrSize);

    float floatArr[arrSize] = {3.1f, 1.4f, 5.9f, 2.6f, 7.2f, 4.8f};
    cout << "\nBefore sorting (float array): ";
    displayArray(floatArr, arrSize);
    sortArray(floatArr, arrSize);
    cout << "After sorting (float array): ";
    displayArray(floatArr, arrSize);

    double doubleArr[arrSize] = {0.987, 1.618, 3.333, 2.505, 1.111, 4.444};
    cout << "\nBefore sorting (double array): ";
    displayArray(doubleArr, arrSize);
    sortArray(doubleArr, arrSize);
    cout << "After sorting (double array): ";
    displayArray(doubleArr, arrSize);

    int x = 25, y = 45, z = 5, w = 55, u = 35, v = 15;
    int* ptrArr[arrSize] = {&x, &y, &z, &w, &u, &v};
    cout << "\nBefore sorting (pointers to int array): ";
    displayArray(ptrArr, arrSize);
    sortArray(ptrArr, arrSize);
    cout << "After sorting (pointers to int array): ";
    displayArray(ptrArr, arrSize);

    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

void countingSort(int arr[], int n, int exp) {
    int* output = new int[n];  // Dynamic memory allocation
    int count[10] = {0};

    for (int i = 0; i < n; ++i)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; ++i)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; ++i)
        arr[i] = output[i];

    delete[] output;  // Release dynamic memory
}

void radixSort(int arr[], int n) {
    int max_num = *max_element(arr, arr + n);

    for (int exp = 1; max_num / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main() {
    int arr[] = {658,43,89,321,67,94,72};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr, n);

    cout << "Radix Sort:";
    for (int i = 0; i < n; ++i) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}

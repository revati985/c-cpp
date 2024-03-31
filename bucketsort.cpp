#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bucketSort(float arr[], int n) {
    // Create buckets
    vector<float> buckets[10];

    // Add elements to respective buckets
    for (int i = 0; i < n; ++i) {
        int index = arr[i] * 10;
        buckets[index].push_back(arr[i]);
    }

    // Sort each bucket
    for (int i = 0; i < 10; ++i) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate sorted buckets
    int index = 0;
    for (int i = 0; i < 10; ++i) {
        for (float num : buckets[i]) {
            arr[index++] = num;
        }
    }
}

int main() {
    float arr[] = {0.67,0.32,0.78,0.21,0.54,0.12};
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);

    cout << "Bucket Sort:";
    for (int i = 0; i < n; ++i) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}

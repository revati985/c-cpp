#include <iostream>
#include <climits>
using namespace std;

// Function to multiply two matrices and store result in a third matrix
void matrixMultiply(int A[], int B[], int C[], int rowA, int colA, int rowB, int colB) {
    for (int i = 0; i < rowA; ++i) {
        for (int j = 0; j < colB; ++j) {
            C[i * colB + j] = 0;
            for (int k = 0; k < colA; ++k) {
                C[i * colB + j] += A[i * colA + k] * B[k * colB + j];
            }
        }
    }
}

// Function to find the minimum number of scalar multiplications needed for chain matrix multiplication
int chainMatrixMultiplication(int dims[], int n) {
    // Create a table to store results of subproblems
    int m[n][n];
    // Cost is 0 when multiplying one matrix
    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    // L is chain length.
    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                // Cost for the current multiplication
                int cost = m[i][k] + m[k + 1][j] + dims[i - 1] * dims[k] * dims[j];
                if (cost < m[i][j])
                    m[i][j] = cost;
            }
        }
    }
    return m[1][n - 1];
}

int main() {
    int A;
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Minimum number of multiplications needed: " << chainMatrixMultiplication(a, n) << endl;
    return 0;
}

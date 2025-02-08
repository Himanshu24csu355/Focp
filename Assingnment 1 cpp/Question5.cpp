#include <iostream>
using namespace std;

// Function to transpose the matrix
void transpose(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

// Function to reverse each row of the matrix
void reverseRows(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

// Function to rotate the matrix 90 degrees clockwise
void rotateMatrix(int matrix[][100], int n) {
    // Step 1: Transpose the matrix
    transpose(matrix, n);
    
    // Step 2: Reverse each row
    reverseRows(matrix, n);
}

// Function to print the matrix
void printMatrix(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n): ";
    cin >> n;

    int matrix[100][100];

    // Input the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Rotate the matrix 90 degrees clockwise
    rotateMatrix(matrix, n);

    // Print the rotated matrix
    cout << "Matrix after rotating 90 degrees clockwise:" << endl;
    printMatrix(matrix, n);

    return 0;
}

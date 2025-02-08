#include <iostream>
using namespace std;

void printSpiral(int n) {
    int matrix[n][n];  // Declare a 2D array of size n x n
    int value = 1;      // Start filling the spiral with the value 1
    
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        // Fill the top row
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;
        
        // Fill the right column
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;
        
        if (top <= bottom) {
            // Fill the bottom row
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }
        
        if (left <= right) {
            // Fill the left column
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = value++;
            }
            left++;
        }
    }
    
    // Print the spiral matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the spiral (n): ";
    cin >> n;
    
    printSpiral(n);
    
    return 0;
}

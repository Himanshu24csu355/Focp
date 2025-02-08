#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of an array: "; 
    cin >> n;
    
    // Edge case: If the array has fewer than 2 elements, second largest or second smallest cannot exist.
    if (n < 2) {
        cout << "Array must have at least two elements to find second largest and second smallest." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array 
    cout << "The reverse of the array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << setw(2) << arr[i];
    }

    // Find second largest number
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            smax = max; // smax is now the previous max
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i]; // update second largest
        }
    }

    if (smax == INT_MIN) {
        cout << "\nNo valid second largest number found (all elements might be the same)." << endl;
    } else {
        cout << "\nThe second maximum number is: " << smax;
    }

    // Find second smallest number
    int min = INT_MAX;
    int smin = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            smin = min; // smin is now the previous min
            min = arr[i];
        } else if (arr[i] < smin && arr[i] != min) {
            smin = arr[i]; // update second smallest
        }
    }

    if (smin == INT_MAX) {
        cout << "\nNo valid second smallest number found (all elements might be the same)." << endl;
    } else {
        cout << "\nThe second smallest number is: " << smin;
    }

    return 0;
}

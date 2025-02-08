#include <iostream>
using namespace std;

// to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // If divisible by any number other than 1 and itself, not prime
        }
    }
    return true; // Prime number
}

// to find all factors of a number
void findFactors(int n) {
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " "; 
        }
    }
    cout << endl;
}

// to find the next prime number greater than n
int nextPrime(int n) {
    int next = n + 1;
    while (true) {
        if (isPrime(next)) {
            return next;
        }
        next++;
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        findFactors(n);
        int nextPrimeNum = nextPrime(n);
        cout << "The next prime number greater than " << n << " is: " << nextPrimeNum << endl;
    }

    return 0;
}

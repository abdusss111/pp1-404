#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // GCD starts as the first number
    int gcd = a[0];

    // Loop through the rest of the numbers to calculate GCD
    for (int i = 1; i < n; i++) {
        // Brute-force approach to find GCD of gcd and a[i]
        int minVal = (gcd < a[i]) ? gcd : a[i];  // Find the smaller number between gcd and a[i]
        int currentGCD = 1;  // Default GCD is 1

        // Try every number from 1 to minVal and find the largest number that divides both
        for (int j = 1; j <= minVal; j++) {
            if (gcd % j == 0 && a[i] % j == 0) {
                currentGCD = j;  // Update the current GCD
            }
        }
        
        gcd = currentGCD;  // Update the gcd for the next iteration
    }

    // Output the result
    cout << gcd << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, z;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> z;

    // Adjust z so it's within the range [-n, n]
    z = z % n;
    
    // If z is negative, convert it to a positive equivalent for right shifting
    if (z < 0) {
        z += n;
    }

    // Output the array after shifting
    for (int i = 0; i < n; i++) {
        // Calculate the new position in a cyclic manner
        cout << arr[(i + (n - z)) % n] << " ";
    }

    return 0;
}

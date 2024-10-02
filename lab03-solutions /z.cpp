#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n; 
    int arr[n];    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max_gcd = 0; 
    

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int current_gcd = gcd(arr[i], arr[j]); 
            max_gcd = max(max_gcd, current_gcd); 
        
        }
    }
    cout << max_gcd << endl; 
    return 0;
}
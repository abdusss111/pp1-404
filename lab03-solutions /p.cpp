#include <iostream>
using namespace std;

int main() {
    int n, result = 1; 
    cin >> n;
    for(int i = 0; result < n; i++){
        cout << result << " ";
        result *= 2;
    }
    return 0;
}

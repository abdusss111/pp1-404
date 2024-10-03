#include <iostream>
#include <climits>
using namespace std;

int main() {
    int number[1000] = {};
    for(int i = 0; i < 1000; i++) number[i] = 0;

    int n, max = INT_MIN;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        number[arr[i]]++;
    }

    for(int i = 0; i < 1000; i++){
        if(max < number[i]){
            max = number[i];
        }
    }
    for(int i = 999; i >= 0; i--){
        if(number[i] == max) cout << i << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    cout << "a";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (arr[i] < arr[j]) swap(arr[i], arr[j]);
        }
    }



    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN, min = INT_MAX;
    int max_index, min_index;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            max_index = i;
        }
        if(min > arr[i]) {
            min = arr[i];
            min_index = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == max) arr[i] = min;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


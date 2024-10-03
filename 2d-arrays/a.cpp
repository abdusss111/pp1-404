#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for(int i = 2; i >= 0; i--){
        for(int j = 2; j >= 0; j--){
            sum += arr[i][j];
        }
        cout << endl;
    }
    cout << sum;
    return 0;
}

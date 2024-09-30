#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
        for(int j = 0; j < arr[i].size(); j++){
            if (arr[i][j] == '0') cnt++;
        }
    }
    cout << cnt;

    return 0;
}
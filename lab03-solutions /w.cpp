#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    string symbols = "0123456789ABCDEF", result = "";
    while(n != 0){
        result = symbols[n%16] + result;
        n /= 16; 
    }
    cout << result;
    return 0;
}



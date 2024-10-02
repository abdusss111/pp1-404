#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    while(cin.peek() != '\n'){
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum;
}
#include <iostream>
using namespace std;

int main() {
    int a = 36;
    int b = 60, gcd;

    for(int i = 1; i <= 36; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    cout << gcd;

    return 0;
}

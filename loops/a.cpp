// for, while, do while
#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    while( n!=0 ){
        if(n%10 == 3){
            continue;
        }
        sum += n%10;
        n /= 10;
    }
    cout << sum;
    return 0;
}



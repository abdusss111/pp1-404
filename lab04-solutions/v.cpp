#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        for (int j=0; j<i; j++){
            if(i%j==0 ){
            continue;
        }
        }
        cout<<i<<" "<<"is prime"<<endl;
    }


    return 0;
}
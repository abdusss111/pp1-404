#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n][2*n-1];
    for(int i=0; i<n;i++){
        for(int j=1; j<n-i;j++){
            cout<<'.';}
        for(int j=n-i; j<=n+i;j++){
            cout<<'*';}
        for(int j=n+i; j<2*n-1; j++){
            cout<<'.';
        }
        
        cout<<endl;
            }  
        

    return 0;
}
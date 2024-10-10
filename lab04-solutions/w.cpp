#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++){
       for(int j=0; j<n;j++){
        cin>>arr[i][j];}
    cnt=0;
    for (int i=0; i<n; i++){
       for(int j=0; j<n;j++){
        if(i+j==n-1){
         cnt+=arr[i][j];
       }}}
    }
    cout<<cnt<<" ";
    return 0;
}
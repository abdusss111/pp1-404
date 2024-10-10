#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int maxi=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];}
    for(int i=0; i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }}

    cout<<maxi;




    return 0;
}
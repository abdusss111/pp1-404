#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int first=INT_MIN;
    int second=INT_MIN;
    bool allsame = false;
 
    int cnt=0;
    cin>>n;
    int arr[n][n];
    int firstElement=arr[0][0];
    for (int i=0; i<n; i++){
       for(int j=0; j<n;j++){
        cin>>arr[i][j];
       }
    }
/*
    for (int i=1; i<n; i++){
       for(int j=1; j<n;j++){
       if(arr[i][j]!=firstElement){
        allsame=false;
       }
       
       }
    }  cout<< allsame;
    
*/
    
    for (int i=0; i<n; i++){
       for(int j=0; j<n;j++){
        if(arr[i][j]>first){
            first=arr[i][j];}
       }
    }
        
    for (int i=0; i<n; i++){
       for(int j=0; j<n;j++){
        if(arr[i][j]>second&&arr[i][j]!=first ){
           second=arr[i][j];
        }
       }
       }
       if (second==first){
        cout<<0;
       }
       else{

    cout<<second;}
    return 0;
}
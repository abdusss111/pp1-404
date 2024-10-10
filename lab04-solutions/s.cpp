#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int maxi=INT_MIN;
    int index_max=0;
    int index_maxi=0;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++){
       for(int j=0; j<n;j++){
        cin>>arr[i][j];
       }
    }
    for (int i=0; i<n; i++){
       for(int j=0; j<n;j++){
       if(arr[i][j]>maxi){
        maxi=arr[i][j];
      index_maxi=j;
      index_max=i; }
      
      
    }
       
    cout<<endl;
    }
    cout<<index_max+1<<" "<<index_maxi+1;
    return 0;
}
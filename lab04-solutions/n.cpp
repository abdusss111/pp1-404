#include <iostream>
#include <climits>
using namespace std;
int main (){
    int n;
    int index=0;
    int maxi=INT_MIN;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n;i++ ){
        for (int j=0;j<n; j++){
            cin>>arr[i][j];}
    }
    for (int i=0; i<n;i++ ){
        for (int j=0;j<n; j++){
           if(i==j){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
                index=i;

            }
            
           }
    }
    }
  cout<<"Maximum element is:"<<" "<<maxi<<" "<<"with coordinates:"<<" "<<index+1<<";"<<index+1;
    
    


    return 0;
}
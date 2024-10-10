#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int maxi=INT_MIN;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0; i<n; i++){
        maxi=INT_MIN;
        for (int j=0; j<n;j++){
                if(arr[i][j]>maxi){
                    maxi=arr[i][j];
                }
            }
            for(int j=0; j<n; j++){
                arr[i][j]=maxi;

              }
        }
        for(int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
        

    return 0;
}
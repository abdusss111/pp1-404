#include <iostream>
using namespace std;

int main() {

   int arr[100][100];
   int n;
   cin>>n;
   for (int i=0; i<n;i++){
    arr[0][i]=i;
    arr[i][0]=i;
    arr[i][i]=i*i;
   }
    for(int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
     cout<<endl;}

    return 0;
}
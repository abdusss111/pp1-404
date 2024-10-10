#include <iostream>
#include <climits>
using namespace std;
int main(){
    int mini=INT_MAX;
    int index=0,inde=0;
    int sum=0;
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n; i++){
        for (int j=0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    for (int i=0;i<m; i++){
        mini=INT_MAX;
        for (int j=0; j<n; j++) { 
         if(arr[j][i]<mini){
            mini=arr[j][i]; 
            index=j;
            inde=i;sum+=mini;} 
            
           cout<< '\n';
        } 
         
         cout<<index+1<<";"<<inde+1;
         
         }cout<<"coordinates of min elements:"<<endl;
cout<<"Their sum:"<<sum;

    return 0;
}
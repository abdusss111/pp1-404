#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,m;int sum=0;
    int mx_row=INT_MIN;;
    cin>>n;
    cin>>m;
    int arr[n][m];
    for (int row=0; row<n;row++){
        for(int clm=0; clm<m;clm++){
            cin>>arr[row][clm];
        }
    }
    for (int row=0; row<n; row++){
         sum=0;
         for(int clm=0; clm<m;clm++){
            sum +=arr[row][clm];}
            if (mx_row<sum){
                mx_row=sum;
            }
    }
    cout<<mx_row;




    return 0;
}
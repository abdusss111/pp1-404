#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,m;int sum=0;
    int min_row=INT_MAX;
    int pos=0;
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
            if (min_row>sum){
                min_row=sum;
                pos++;
            }
    }
    cout<<pos;




    return 0;
}
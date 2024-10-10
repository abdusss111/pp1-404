#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
    for (int row=0; row<n;row++){
        for(int clm=0; clm<row+1;clm++){
            cout<<'#';}
        for(int clm=n; clm>row+1;clm--){
                cout<<'.';}
                cout<<endl;
    }
    }
    else{
    for (int row=0; row<n;row++){
        for(int clm=n; clm>row+1;clm--){
            cout<<'.';}
        for(int clm=0; clm<row+1;clm++){
                cout<<'#';}
                cout<<endl;
    
    }
    }
    return 0;
}
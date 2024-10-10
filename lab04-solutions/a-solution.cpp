#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    int n,m, minx;
    cin>>n>>m;
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    bool ismaxval=true;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(ismaxval){
                int maxn=INT_MIN;
                int row=0;
                int col=0;
                for (int k=0;k<n;k++){
                    for (int l=0;l<m;l++){
                        if (a[k][l]!=-1 && maxn<a[k][l]){
                            maxn=a[k][l];
                            row=k;
                            col=l;
                        }
                    }
                }
                cout<<maxn<<" ";
                ismaxval=false;
                a[row][col]=-1;
            }
            else{
                int minx=INT_MAX;
                int row=0;
                int col=0;
                for (int k=0;k<n;k++){
                    for (int l=0;l<m;l++){
                        if(a[k][l]!=-1 && minx>a[k][l]){
                            minx=a[k][l];
                            row=k;
                            col=l;
                        }
                    }
                }
                cout<<minx<<" ";
                ismaxval=true;
                a[row][col]=-1;
            }
        }
        cout<<endl;
    }
    return 0;
}
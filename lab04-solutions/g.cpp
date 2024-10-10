#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, count=0;
    cin>>n>>m;
    char arr[8][8];
    if (n>=0 && n<=7 && m>=0 && m<=7){
        
        for (int i=0; i<8; i++){
            for (int j=0; j<8; j++){
                arr[i][j]='*';
            if(i==n||j==m){
                arr[i][j]='2';
            }
            else if(abs(i-n)==abs(j-m)){
                arr[i][j]=char(50);
            }

            }
        }
        arr[n][m]=char(49);
        for (int i=0; i<8; i++){
            for (int j=0; j<8; j++){
                cout<<arr[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Impossible";
    }
  
}
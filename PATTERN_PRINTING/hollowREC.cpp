#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num of rows:";
    cin>>n;
    int m;
    cout<<"enter a nnum of colum:";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==n||i==1||j==1||j==m){
                cout<<"*";
        }else cout<<" "; 
    }
        cout<<endl;
    }
}
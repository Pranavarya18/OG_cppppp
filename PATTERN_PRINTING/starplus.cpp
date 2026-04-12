#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num:";
    cin>>n;
    int mid= n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==mid || mid==j){
                cout<<"* ";
            }else{
                cout<<"# ";
            }
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter number of rows: ";
//     cin>>m;
//     int n;
//     cout<<"enter number of colums: ";
//     cin>>n;
//     int mid =n/2+1;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             if(i==mid || j==mid){
//                 cout<<"* ";
//             }else{    
//             cout<<"# ";
//             }
//     }
//     cout<<endl;
// }
// }
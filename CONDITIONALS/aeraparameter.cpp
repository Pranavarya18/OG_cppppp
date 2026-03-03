#include<iostream>
using namespace std;
int main(){
    int l,b;
    int area, parameter;
    cout<<"enter length :";
    cin>>l;
    cout<<"enter bredth : ";
    cin>>b;
    //calclulate 
    area=l*b;
    parameter=2*(l+b);

    if(area>parameter){
        cout<<"area is greater than parameter"<<endl;
    }
    else if(parameter>area){
        cout<<"parameter is greater than area"<<endl;
    }
    else{
        cout<<"both are equal";
    }
}



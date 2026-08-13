#include<iostream>
using namespace std;

int main(){
    int a=12;
    cout<<a<<endl;

    a+=12;
    cout<<a<<endl;

    int b=5;

    a-=b;
    cout<<a<<endl;

    a*=b;
    cout<<a<<endl;

    a/= b;
    cout<<a<<endl;

    int i,j;
    cout<<"Enter Value Of i = ";
    cin>>i;
    cout<<"Enter Value Of j = ";
    cin>>j;

    cout<<i+j<<endl;
    cout<<i-j<<endl;
    cout<<i*j<<endl;
    cout<<i/j<<endl;
    cout<<i%j<<endl;
    
    return 0;
}
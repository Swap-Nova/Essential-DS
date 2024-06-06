#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &r=a;
    r=25;
    cout<<"Original Values: "<<endl<<a<<endl<<r<<endl;
    cout<<"======================"<<endl;

    int b=30;
    r=b;
    cout<<"Changed Values: "<<endl<<b<<endl<<r<<endl;
    cout<<"======================"<<endl;

    cout<<"Address: "<<&r<<endl;
    cout<<"======================"<<endl;

    return 0;
}
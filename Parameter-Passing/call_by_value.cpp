#include<iostream>
using namespace std;
int sub(int a , int b){
    int c;
    c=b-a;
    return c;
};

int main(){
    int num1, num2, result;
    cout<<"Number-1: ";
    cin>>num1;
    cout<<"Number-2: ";
    cin>>num2;

    result = sub(num1, num2);
    cout<<"Solution: "<<result<<endl;

    cout<<"============="<<endl;
    return 0;
}
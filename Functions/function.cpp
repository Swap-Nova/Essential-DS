#include<iostream>
using namespace std;

int product(int a,int b){
    int c;
    c=a*b;
    return c;
}

int main(){
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    int result;
    result=product(num1,num2);
    cout<<"End Result: "<<result<<endl;
    
    return 0;
}
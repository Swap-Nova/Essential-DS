// Swap function 
// Using call by reference instead of address

#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int num1=4, num2= 6;
    swap(num1,num2);

    cout<<num1<<endl;
    cout<<num2<<endl;

    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;  // assign pointers
    cout<<"Variable Value: "<<a<<endl;
    cout<<"Dereferencing :"<<*p<<endl;
    cout<<"Address: "<<&a<<endl;
    cout<<"===================="<<endl;

    // Pointer to an Array
    int B[5]={0,1,2,3,4};
    int *p1;
    p1=B;
    cout<<"Array Value: "<<endl;
    for(int i=0;i<5;i++){
        cout<<B[i]<<endl;
    }
    cout<<"Address of Pointer Array: " <<B<<endl;
    cout<<"===================="<<endl;

    // Heap memory to Pointer
    int *p2;
    p2 = new int[5]; // array size
    cout<<"Array Value of heap pointer: "<<endl;
    int values [] = {5,6,7,8,9};
    for(int i=0;i<5;i++){
        p2[i] = values[i];
        cout<<p2[i]<<endl;
    }
    cout<<"Address of Heap Pointer: "<<p2<<endl;
    cout<<"===================="<<endl;

    delete[ ] p;
    delete[ ] p1;
    delete[ ] p2;
    cout<<"===================="<<endl;
    
    return 0;

}
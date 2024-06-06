#include<iostream>
using namespace std;

int *fun(int size){
    int *p;
    p = new int [size];
    for(int i = 0; i < 5;i++){
        p[i] = i*2;
    }
    return p;
}

int main(){
    int a = 10;
    int *p;
    p = &a;
    cout<<"1st Address: "<<&a<<endl;
    cout<<"1st Value: "<<*p<<endl;
    cout<<"============="<<endl;

    int B[5]={1,2,3,4,5};
    int *p1;
    p1 = B;
    cout<<"2nd Address: "<<B<<endl;
    cout<<"2nd Value: ";
    for(int i=0;i<5;i++){
        cout<<B[i]<< " ";
    }
    cout<<endl;
    cout<<"============="<<endl;

    // Heap memory to pointer
    int *p2;
    p2= new int[5];
    cout<<"3rd Address: "<<p2<<endl;
    int values [] = {5,6,7,8,9};
    cout<<"3rd Value: ";
    for(int i=0;i<5;i++){
        p2[i]=values[i];
        cout<<p2[i]<<" ";
    }
    cout<<endl;
    cout<<"============="<<endl;

    // 2nd Example of array as parameter
    int *ptr;
    int sz = 5;
    ptr = fun(sz);
    cout<<"4th Address: "<<ptr<<endl;
    cout<<"Array elements as a parameter: ";
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<" ";
    }

    return 0;
}
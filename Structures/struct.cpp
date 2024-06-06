#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

struct Rectangle{
    int length, breadth;
}r1;

struct cube{
    int edge;
    char x;
}c1;

int main(){
    struct Rectangle r1={20,30};
    cout<<"Area: "<<r1.length*r1.breadth<<endl;
    cout<<"================"<<endl;

    struct cube c1={7};
    cout<<"Area: "<<pow(c1.edge,3)<<endl;
    cout<<"================"<<endl;

    struct cube c2 = {7,4};
    cout<<"Datatype size: "<<sizeof(c2)<<endl;
    cout<<"================"<<endl;
    return 0;
}
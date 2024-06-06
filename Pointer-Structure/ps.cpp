#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle {
    int length,breadth;
};

int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<"Size of: "<<sizeof(p1)<<endl;
    cout<<"Size of: "<<sizeof(p2)<<endl;
    cout<<"Size of: "<<sizeof(p3)<<endl;
    cout<<"Size of: "<<sizeof(p4)<<endl;
    cout<<"Size of: "<<sizeof(p5)<<endl;

    return 0;
}
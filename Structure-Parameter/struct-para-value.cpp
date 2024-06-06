#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Rect{
    int length, breadth;
};

// call by value
void fun(struct Rect *r){
    r= new Rect;
    r->length = 20;
    r->breadth = 30;
}

int main(){
    struct Rect r={10,5};
    fun(&r);
    cout<<"Area of rectangle: "<<r.breadth*r.length<<endl;
}
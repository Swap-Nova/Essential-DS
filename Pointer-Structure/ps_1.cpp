#include<iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

struct Rectangle{
    int length,breadth;
};

struct Square{
    int side;
};

struct Cube{
    int edge;
};

int main(){
    struct Rectangle *r;
    r = new Rectangle;

    cout<<"Length: ";
    cin>>r->length;
    cout<<"Breadth: ";
    cin>>r->breadth;

    int result = r->length*r->breadth;
    cout<<"Result: "<<result<<endl;

    cout<<"===================="<<endl;

    struct Cube c={10};
    struct Cube *p=&c;
    cout<<"Address of Cube Pointer: "<<&c<<endl;

    int cube_result = pow(p->edge,3);
    cout<<"Cube result: "<<cube_result<<endl;

    cout<<"===================="<<endl;

    struct Square x;
    struct Square *s=&x;
    s = new Square;

    cout<<"Side: ";
    cin>>s->side;

    int square_result = pow(s->side,2);
    cout<<"Square result: "<<square_result<<endl;

    cout<<"Address of Square Pointer: "<<&x<<endl;

    cout<<"===================="<<endl;

    return 0;
}
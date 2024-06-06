#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int A [5];
    int B[5] = {0,1,2,3,4};
    cout<<"For-loop array: "<<endl;
    for (int i = 0; i < 5; i++){
        cout<<B[i]<<endl;
    }
    cout<<"====================="<<endl;

    cout<<"Alternate way to print arrays: "<<endl;
    for(int x:B){
        cout<<x<<endl;
    }
    cout<<"====================="<<endl;

    // int data-type
    cout<<"Size of array: "<<sizeof(B)<<endl;
    // element index
    cout<<"First element: "<<B[0]<<endl;
    cout<<"Last element: "<<B[4]<<endl;
    cout<<"====================="<<endl;

    return 0;
}
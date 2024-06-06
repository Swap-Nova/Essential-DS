#include<iostream>
using namespace std;

void function(int A[ ], int n){
    cout<<"Function Build Output: ";
    for(int i = 0; i < n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int A[ ]={2,4,6,8,10};
    int n = 5;
    function(A,n);
    cout<<endl;
    cout<<"Main function calling previous function Output: ";

    for(int x:A){  
        cout<<x<<" ";
    }
    return 0;
}
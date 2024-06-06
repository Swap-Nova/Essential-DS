#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,4};
    int *pointer;
    pointer = arr;
    for(int i=0; i<5; i++){
        pointer[i]= arr[i];
        cout<<pointer[i]<<" ";
    }
    return 0;
}
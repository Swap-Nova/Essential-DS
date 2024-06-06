// Swap Funtion 
// Pointers: Formal Parameter

#include<iostream>
using namespace std;

void swap_function(int *x, int *y){
    int variable;
    variable = *x;
    *x = *y;
    *y = variable;
}

int main(){
    int num1 = 20, num2 = 30;

    cout<<"Address of num1 pre-swap: "<<&num1<<endl;
    cout<<"Address of num2 pre-swap: "<<&num2<<endl;

    cout<<"Value of num1 pre-swap: "<<num1<<endl;
    cout<<"Value of num2 pre-swap: "<<num2<<endl;

    cout<<"==================="<<endl;

    // dereference the parameters to swap 
    swap_function(&num1,&num2);

    cout<<"Address of num1 post-swap: "<<&num1<<endl;
    cout<<"Address of num2 post-swap: "<<&num2<<endl;

    cout<<"Value of num1 post-swap: "<<num1<<endl;
    cout<<"Value of num2 post-swap: "<<num2<<endl;

    return 0;
}
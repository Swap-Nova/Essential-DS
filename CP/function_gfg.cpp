#include<iostream>
using namespace std;

int calcSum(int a,int b,int c);

int main() {
	int t;
    cout<<"How many times: ";
	cin>>t;
	for(int i=1;i<=t;i++)
	{
        int a,b,c;
        cout<<"Enter all the three values for sum: ";
        cin>>a>>b>>c;
        int sum = calcSum(a,b,c);
        cout<<"Result: "<<sum<<"\n";
	}
	return 0;
}

int calcSum(int a, int b, int c)    
{
    int result;
    result = a+b+c;
    return result;
}
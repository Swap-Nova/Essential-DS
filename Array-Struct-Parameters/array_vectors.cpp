#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    vector<int>array[n];
    array[0].push_back(1);
    array[1].push_back(2);
    array[2].push_back(3);
    array[3].push_back(4);
    array[4].push_back(5);

    array[0].pop_back();

    for(int i=0; i<n; i++){
        // cout<<"Array size: "<<array[i].size()<<endl;
        // cout<<endl;
        for(int j=0; j<array[i].size(); j++){
            // cout<<array[i][j]<<" ";
            cout<<"Element at arr["<<i<<"]"<<"["<<j<<"]:";
            cout<<" "<<array[i][j]<<endl;
        }
    }

    return 0;
}
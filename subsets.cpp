#include<bits/stdc++.h>
using namespace std;

int  subsets(vector<int>arr){

    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            cout<<arr[j]<<endl;
        }
    }
}

int main(){
    vector<int>arr={1,2,3};
    cout<< subsets(arr);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> &arr,int i){

    if(i == arr.size() - 1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return is_sorted(arr,i+1);

}
int main(){
    vector<int>arr={10,20,30,40,50};
    int i=0;
    cout<<is_sorted(arr,i);


    return 0;
}
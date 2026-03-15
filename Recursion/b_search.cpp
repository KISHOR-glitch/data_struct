#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>&arr,int low,int high,int el){

    if(low>high){
        return false;
    }
    int mid=(low+high)/2;
    if(arr[mid]==el){
        return true;
    }
    if(arr[mid]>el){
        search(arr,low,mid-1,el);
    }
     if(arr[mid]<el){
        search(arr,mid+1,high,el);
    }

}

int main(){


    vector<int>arr={10,20,30,40,50};
    cout<<search(arr,0,arr.size()-1,66);

    return 0;
}
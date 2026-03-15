#include<bits/stdc++.h>
using namespace std;

bool is_search(vector<int> &arr,int n,int el){

    if(n==0){
        return arr[0]==el;
    }
    if(arr[n]==el){
        return true;
    }
    return is_search(arr,n-1,el);

   

}
int main(){
    vector<int>arr={10,20,30,40,50};
    int el=0;
    
    cout<<is_search(arr,arr.size()-1,el);


    return 0;
}
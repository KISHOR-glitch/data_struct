#include<bits./stdc++.h>
using namespace std;

string pattern(int n,int count){
    if(count%4==0){
        cout<<endl;
    }
    if(n==0){
        return "\n";
    }
    count++;
    cout<<"*";
   
    
    return pattern(n-1,count)+ pattern(n-1,count);
    
   
}

int main(){

    int n=4;
    int count=0;
    cout<<pattern(n,count);




    return 0;
}
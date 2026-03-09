#include <iostream>
using namespace std;

int count_p(int n){
    if(n==1){
        return 1;
    }
    cout<<n;
    return count_p(n-1);
    
}


int main(){
int n;
    cin>>n;

    cout<<count_p(n);
    


    
    return 0;
}
// #include<iostream>
// using namespace std;

// int p_of_n(int n,int res){
    
//    if(n<=0){
//     return res;
//    }
//    return p_of_n(n-1,res*2);
// }

// int main(){
//     int n;
//     cout<<"Enter n value"<<endl;
//     cin>>n;
//     int res=1;

//     int result = p_of_n(n,res);
//     cout<<result;

//     return 0;

// }

#include <iostream>
using namespace std;

int power(int n){
    if(n == 0)
        return 1;

    return 2 * power(n-1);
}

int main(){
    int n;
    cin >> n;

    cout << power(n);
}
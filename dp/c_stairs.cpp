// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> dp(100, -1);

// int climb(int n){

//     if(n <= 2)
//         return n;

//     if(dp[n] != -1)      // already computed
//         return dp[n];

//     dp[n] = climb(n-1) + climb(n-2);

//     return dp[n];
// }

// int main(){
//     int n = 5;
//     cout << climb(n);
// }

#include <iostream>
#include <vector>
using namespace std;

int climb(int n){

    vector<int> dp(n+1);

    dp[1] = 1;
    dp[2] = 2;

    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main(){
    cout << climb(10);
}
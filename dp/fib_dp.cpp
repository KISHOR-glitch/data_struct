#include <iostream>
#include <vector>
using namespace std;

vector<int> dp(100, -1);

int fib(int n) {
    if(n <= 1)
        return n;

    if(dp[n] != -1)      // value already computed
        return dp[n];

    dp[n] = fib(n-1) + fib(n-2);   // store result
    return dp[n];
}

int main() {
    cout << fib(6);
}

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> ans;

    vector<string> generateParenthesis(int n) {
        string curr;
        solve(curr, n, 0, 0);   // open count, close count
        return ans;
    }

    void solve(string curr, int n, int open, int close) {

        if(open + close == 2*n){
            ans.push_back(curr);
            return;
        }

        // add "("  → +1
        if(open < n){
            curr.push_back('(');
            solve(curr, n, open+1, close);
            curr.pop_back();
        }

        // add ")"  → -1
        if(close < open){
            curr.push_back(')');
            solve(curr, n, open, close+1);
            curr.pop_back();
        }
    }
};



int main() {

    Solution obj;

    int n = 3;

    vector<string> result = obj.generateParenthesis(n);

    cout << "Valid Parentheses:\n";

    for(string s : result){
        cout << s << endl;
    }

    return 0;
}
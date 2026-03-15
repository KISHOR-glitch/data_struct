// class Solution {
// public:

//     void solve(string digits, vector<string>& ans, string curr, int i, vector<string>& map) {
        
//         if(i == digits.size()){
//             ans.push_back(curr);
//             return;
//         }

//         string letters = map[digits[i] - '0'];

//         for(char c : letters){
//             solve(digits, ans, curr + c, i + 1, map);
//         }
//     }

//     vector<string> letterCombinations(string digits) {
        
//         vector<string> ans;
//         if(digits.size() == 0) return ans;

//         vector<string> map = {
//             "", "", "abc", "def", "ghi",
//             "jkl", "mno", "pqrs", "tuv", "wxyz"
//         };

//         solve(digits, ans, "", 0, map);

//         return ans;
//     }
// };
// class Solution {
// public:
    
//     int minCoins = INT_MAX;

//     void solve(int i, vector<int>& coins, int target, int count) {

//         if(target == 0){
//             minCoins = min(minCoins, count);
//             return;
//         }

//         if(target < 0 || i == coins.size())
//             return;

//         // not taking the coin
//         solve(i + 1, coins, target, count);

//         // taking the coin
//         solve(i, coins, target - coins[i], count + 1);
//     }

//     int coinChange(vector<int>& coins, int amount) {

//         solve(0, coins, amount, 0);

//         if(minCoins == INT_MAX)
//             return -1;

//         return minCoins;
//     }
// };


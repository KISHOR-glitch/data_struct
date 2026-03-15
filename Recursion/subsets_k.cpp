#include <bits/stdc++.h>
using namespace std;

void printSubsets(vector<int>& arr, vector<int>& ans, int i, int k){

    if(i == arr.size()){
        int sum = 0;
        for(int val : ans){
            sum += val;
        }

        if(sum == k){
            for(int val : ans){
                cout << val << " ";
            }
            cout << endl;
        }
        return;
    }

    // include element
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1, k);

    ans.pop_back(); // backtrack

    // exclude element
    printSubsets(arr, ans, i+1, k);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;
    int k = 3;

    printSubsets(arr, ans, 0, k);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool printSubsets(vector<int>& arr, vector<int>& ans, int i, int k){

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
            return true;
        }
       
    }

    // include element
    ans.push_back(arr[i]);
    if(printSubsets(arr, ans, i+1, k)) return true;

    ans.pop_back(); // backtrack

    // exclude element
    if(printSubsets(arr, ans, i+1, k)) return true;

    return false;
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;
    int k = 55;

    bool found = printSubsets(arr, ans, 0, k);

    if(!found){
        cout << "No subset found\n";
    }

    return 0;
}
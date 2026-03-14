#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

void sortStack(stack<int>&st){
    
}

};

int main() {

    stack<int> st;

    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);

    Solution obj;
    obj.sortStack(st);

    cout << "Sorted stack (top to bottom):\n";

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
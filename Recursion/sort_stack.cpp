#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
  

 void sortStack(stack<int> &st) {
        if (st.empty()) return;

        int x = st.top();
        st.pop();

        sortStack(st);

        insertSorted(st, x);
    }
    
    void insertSorted(stack<int> &st, int x) {
        if (st.empty() || st.top() <= x) {
            st.push(x);
            return;
        }

        int temp = st.top();
        st.pop();

        insertSorted(st, x);

        st.push(temp);
    }

   

};

int main() {

    stack<int> st;

    st.push(4);
    st.push(1);
    st.push(3);
    st.push(2);

    Solution obj;
    obj.sortStack(st);

    cout << "Sorted Stack (top to bottom): ";

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
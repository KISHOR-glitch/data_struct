#include<bits/stdc++.h>
using namespace std;

class Stack{
    int arr[100];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int x){
        if(top == 99){
            cout<<"stack overflow";
            return;
        }
        arr[++top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty";
        }
        top--;
        return ;
        
    }
    int peek(){
        int res = arr[top];
        return res;
    }
    void display(){
        for(int i=0;i<=top;i++){
            cout<<arr[i];
        }
    }

};

   int main(){
 Stack s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.pop();
 s.peek();
 s.display();







    return 0;

}
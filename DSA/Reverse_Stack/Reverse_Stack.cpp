#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>stack1;
    stack<int>myStack;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    while(!stack1.empty()){
        myStack.push(stack1.top());
        cout<<myStack.top()<<endl;
        stack1.pop();
    }
    cout<<"----------"<<endl;
    while(!myStack.empty()){
        cout<<myStack.top()<<endl;
        myStack.pop();
    }
}
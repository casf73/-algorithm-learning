//
// Created by HY on 2025/9/25.
//
#include <bits/stdc++.h>

using namespace std;

int main(void){
    stack<int> stk;
    stk.push(5);  //入栈一个元素
    stk.push(6);
    cout << stk.empty() << endl;
    cout << stk.size() << endl; //查看元素个数
    cout << stk.top() << endl; //输出栈顶元素
    stk.pop(); //删除栈顶元素
}

//
// Created by HY on 2025/9/25.
//

#include <bits/stdc++.h>

using namespace std;

int main(void){
    queue<int> que;
    que.push(5);
    que.push(6);
    cout << que.front() << endl; //输出队首元素
    cout << que.back() << endl; //输出队尾元素
    que.pop(); //队首元素出队
    cout << que.size() << endl; //元素个数
    cout << que.empty() << endl;
}

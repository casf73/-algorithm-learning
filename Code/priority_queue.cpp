//
// Created by HY on 2025/9/25.
//

#include <bits/stdc++.h>

using namespace std;

int main(void) {
    priority_queue<int , vector<int> , greater<int>> pq; //默认最大元素
    pq.push(2); //向堆里面填入元素
    cout << pq.top() << endl; //输出堆顶
    pq.push(3);
    cout << pq.top() << endl; //输出堆顶
    pq.push(1);
    cout << pq.top() << endl; //输出堆顶
    pq.pop(); //弹出堆顶元素
}
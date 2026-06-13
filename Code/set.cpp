//
// Created by HY on 2025/9/25.
//

// 集合
// set multiset unordered_set
/*
 *元素去重
 *维护顺序
 *元素是否出现过
*/

#include <bits/stdc++.h>

using namespace std;

int main(void) {
    set<int> st; //默认从小到大
    st.insert(4); //插入元素
    st.insert(2);
    st.insert(3);
    st.insert(1);
    st.find(2); //寻找元素
    cout << st.count(6) << endl; //查询指定元素个数
    cout << st.size() << endl ;
    st.erase(2);
    for (auto &ele : st)
        cout<< ele << endl;
    st.clear();
    for (auto &ele : st)
        cout<< ele << endl;
    //不可以用下表遍历
    //元素是只读的，不可以修改值
}
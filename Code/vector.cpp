#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr(3,0); //  等价于arr[3]
    vector<vector<int>> mat(5,vector<int> (6,10)); //等价于mat[5][6]
    vector<vector<vector<int>>> mat2(5,vector<vector<int>> (6,vector<int> (4))); //等价于mat2[5][6][4]
    arr.push_back(3); //在尾部添加一个元素
    arr.push_back(2);
    arr.push_back(1);
    arr.pop_back(); //删除尾部元素
    //arr.resize(5,4); //改变长度，并且默认为0
    //cout << arr.empty() << endl; //判断是否为空
    for (auto &ele : arr) {
        cout<< ele << endl;
    }
    arr.clear(); //清空
    cout << arr.empty() << endl;
    cout << arr.size() << endl; //输出元素数量
    // 如果题目的长度已经确定，那应该在构造函数的时候直接指定长度，因为重分配是需要时间开销的

}

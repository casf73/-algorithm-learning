//
// Created by HY on 2025/10/6.
//
/* 高精度加法
#include <bits/stdc++.h>

using namespace std;

vector<int> num1;
vector<int> num2;
vector<int> answer;
string a;
string b;
int t;

void add(){
    t = 0;
    for(int i = 0; i < num1.size() || i < num2.size();i++){
        if(i < num1.size()) t += num1[i];
        if(i < num2.size()) t += num2[i];
        answer.push_back(t%10);
        t /= 10;
    }
    if(t) answer.push_back(1);
}

int main(void){
    cin >> a >> b;
    for(int i = a.size() - 1;i > -1; i--) num1.push_back(a[i] - '0');
    for(int i = b.size() - 1;i > -1; i--) num2.push_back(b[i] - '0');
    add();
    for(int i = answer.size() - 1;i > -1;i--) printf("%d",answer[i]);
}
*/
/* 高精度减法
#include <iostream>
#include <vector>

using namespace std;

vector<int> num1;
vector<int> num2;
vector<int> answer;
string a;
string b;
int t = 0;

bool cmp(){
    if(num1.size() != num2.size()) return num1.size() > num2.size();
    else{
        for(int i = num1.size() - 1;i >= 0; i--){
            if(num1[i] != num2[i]) return num1[i] > num2[i];
        }
        return true;
    }
}

void sub(vector<int> &num1 , vector<int> &num2){
    for(int i = 0; i < num1.size() ; i++){
        t = num1[i] - t;
        if(i < num2.size()) t = t - num2[i];
        answer.push_back((t + 10) % 10);
        if(t >= 0) t = 0;
        else t = 1;
    }
    while (answer.size() > 1 && answer.back() == 0) answer.pop_back();
}

int main(void){
    cin >> a >> b;
    for(int i = a.size() - 1;i > -1; i--) num1.push_back(a[i] - '0');
    for(int i = b.size() - 1;i > -1; i--) num2.push_back(b[i] - '0');
    if(cmp()){
        sub(num1 , num2);
        for(int i = answer.size() - 1; i >= 0 ;i-- ) printf("%d",answer[i]);
        printf("\n");
    }
    else{
        sub(num2 , num1);
        printf("-");
        for(int i = answer.size() - 1; i >= 0 ;i-- ) printf("%d",answer[i]);
        printf("\n");
    }
}
*/
/*高精度乘法
#include <iostream>
#include <vector>

using namespace std;

vector<int> num;
string a;
vector<int> answer;
int b;
int t = 0;

void mul(){
    for(int i = 0;i < num.size() || t; i++){
        if(i < num.size()) t += b * num[i];
        answer.push_back(t % 10);
        t /= 10;
    }
    while (answer.size() > 1 && answer.back() == 0) answer.pop_back();
}

int main(void){
    cin >> a >> b;
    for(int i = a.size() - 1;i >= 0; i--) num.push_back(a[i] - '0');
    mul();
    for(int i = answer.size() - 1;i >= 0; i--) printf("%d",answer[i]);
    printf("\n");
}
*/
/*除法
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> num;
string a;
vector<int> answer;
int b;
int r = 0;

void div(){
    for(int i = num.size() - 1 ; i >= 0 ; i--){
        r = r * 10 + num[i];
        answer.push_back(r / b);
        r %= b;
    }
    reverse(answer.begin() , answer.end());
    while(answer.size() > 1 && answer.back() == 0) answer.pop_back();
}

int main() {
    cin >> a >> b;
    for (int i = a.size() - 1; i >= 0; i--) num.push_back(a[i] - '0');
    div();
    for(int i = answer.size() - 1 ; i >= 0 ; i--) printf("%d",answer[i]);
    printf("\n%d\n",r);
}
*/





//
// Created by HY on 2025/10/5.
//

/*B2002
#include <bits/stdc++.h>

using namespace std;

int main(void){
    printf("Hello,World!");
}
*/
/* p2249
#include <bits/stdc++.h>

using namespace std;

const int sum = 1e+6;
vector<int> arr(sum,0);
int n;
int m;
int k;

bool check(int element){
    if(element >= k) return true;
    else return false;
}

int bsearch(){
    int l = -1;
    int r = n;
    int mid = (l+r)/2;
    while(l + 1 != r){
        mid = (l+r)/2;
        if(check(arr[mid])) r = mid;
        else l = mid;
    }
    if(arr[r] == k) return r;
    else return -1;
}

int main(void){
    scanf("%d %d",&n,&m);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d",&k);
        int set = bsearch();
        if(set != -1) printf("%d",set+1);
        else printf("-1");
        if(i != m-1){
            printf(" ");
        }
    }
}
*/
/* P1102
#include <bits/stdc++.h>

using namespace std;

const int sum = 200000;
vector<int> arr(sum,0);
int c;
int n;
long long num = 0;

bool checkleft(int element,int target){
    if(element >= target) return true;
    else return false;
}

bool checkright(int element,int target){
    if(element > target) return true;
    else return false;
}

int bsearchleft(int target){
    int l = -1;
    int r = n;
    int mid = (l+r)/2;
    while(l + 1 != r){
        mid = (l+r)/2;
        if(checkleft(arr[mid],target)) r = mid;
        else l = mid;
    }
    return r;
}

int bsearchright(int target){
    int l = -1;
    int r = n;
    int mid = (l+r)/2;
    while(l + 1 != r){
        mid = (l+r)/2;
        if(checkright(arr[mid],target)) r = mid;
        else l = mid;
    }
    return l;
}

int main(){
    scanf("%d %d",&n,&c);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr.begin(),arr.begin() + n);
    num = 0;
    if(arr[0] + c > arr[n-1]) {
        num = 0;
    }else{
        int i = 0;
        while(i < n){
            if(arr[i] + c > arr[n-1]) break;
            else{
                if(arr[i] + c > arr[n-1]) break;
                int target = arr[i];
                int target2 = arr[i] + c;
                int cnt = bsearchright(target) - bsearchleft(target) + 1;
                int cnt2 = bsearchright(target2) - bsearchleft(target2) + 1;
                num += (long long)cnt2 * cnt;
                i = bsearchright(target) + 1;
            }
        }
    }
    printf("%lld\n",num);
}
*/
/*
#include <bits/stdc++.h>

using namespace std;

int w0;
int w;
int m;

bool check(double money){
    if(money > 0) return true;
    else return false;
}

double bsearch(){
    double l = 0;
    double r = 3;
    double mid = (l + r) / 2;
    double money = w0;
    while(r - l >= 1e-6){
        mid = (l + r) / 2;
        money = w0;
        for(int i = 0;i < m; i++){
            money = money * (1 + mid) - w;
        }
        if(check(money)) r= mid;
        else l = mid;
    }
    return mid;
}

int main(void){
    scanf("%d %d %d",&w0,&w,&m);
    double x= bsearch() * 100;
    printf("%.1lf",x);
}
*/
/* 1042
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string ch;
vector<string> score;
int win = 0;
int lose = 0;

int main(void){
    while(cin >> ch) != EOF)score.push_back(ch);
    for(int i = 0 ; i < score.size() ; i++){
        int j;
        for(j = 0 ; j < score[i].size() ; j++){
            if(score[i][j] == 'E') break;
            if(score[i][j] == 'W') win += 1;
            if(win >= 11 && win - lose >= 2){
                printf("%d:%d\n",win,lose);
                win = 0;
                lose = 0;
            }
            if(score[i][j] == 'L') lose += 1;
            if(lose >= 11 && lose - win >= 2){
                printf("%d:%d\n",win,lose);
                win = 0;
                lose = 0;
            }
        }
        if(score[i][j] == 'E') break;
    }
    printf("%d:%d\n\n",win,lose);
}
*/
/* 1601
#include <iostream>
#include <vector>

using namespace std;

vector<int> num1;
vector<int> num2;
vector<int> answer;
string a;
string b;
int t = 0;

void add(){
    for(int i = 0 ; i < num1.size() || i < num2.size() || t ; i++){
        if(i < num1.size()) t += num1[i];
        if(i < num2.size()) t += num2[i];
        answer.push_back(t % 10);
        t /= 10;
    }
}

int main(){
    cin >> a >> b;
    for(int i = a.size() - 1 ; i >=0 ; i--) num1.push_back(a[i] - '0');
    for(int i = b.size() - 1 ; i >=0 ; i--) num2.push_back(b[i] - '0');
    add();
    for(int i = answer.size() - 1 ; i >=0 ; i--) printf("%d",answer[i]);
}
*/
/* 1303
#include <iostream>
#include <vector>

using namespace std;

vector<int> num1;
vector<int> num2;
string a;
string b;

void mul(vector<int> &answer){
    for(int i = 0 ; i < num2.size() ; i++){
        for(int j = 0 ; j < num1.size() ; j++){
            int t = num2[i] * num1[j];
            answer[i + j] += t % 10;
            answer[i + j + 1] += t / 10;
        }
    }
    for(int i = 0 ; i < answer.size() ; i++){
        if(answer[i] > 9){
            int t = answer[i];
            answer[i] = t % 10;
            answer[i + 1] += t / 10;
        }
    }
    while(answer.size() > 1 && answer.back() == 0) answer.pop_back();
}

int main(){
    cin >> a >> b;
    for(int i = a.size() - 1 ; i >=0 ; i--) num1.push_back(a[i] - '0');
    for(int i = b.size() - 1 ; i >=0 ; i--) num2.push_back(b[i] - '0');
    vector<int> answer(a.size() * b.size() , 0);
    mul(answer);
    for(int i = answer.size() - 1 ; i >=0 ; i--) printf("%d",answer[i]);
}
*/
/* P1009
#include <iostream>
#include <vector>

using namespace std;

vector<int> answer(100,0);
vector<int> result(1,0);
int n;
int cnt = 1;
int sum = 0;
int t = 0;

void mul(int target){
    for(int i = 2 ; i <= target ; i++){
        for(int j = 0 ; j < answer.size() && j < cnt; j++) answer[j] *= i;
        for(int k = 0 ; k < answer.size() && k < cnt ; k++){
            if(answer[k] > 9){
                int t = answer[k];
                answer[k] = t % 10;
                answer[k + 1] += t / 10;
                if(k == cnt - 1) cnt += 1;
            }
        }
    }
    while(answer.size() > 1 && answer.back() == 0) answer.pop_back();
}

void add(){
    for(int i = 0 ; i < result.size() || i < answer.size() || t ; i++){
        if(i < result.size()) t += result[i];
        if(i < answer.size()) t += answer[i];
        result[i] = t % 10;
        if(t > 9 && i == result.size() - 1) result.push_back(0);
        t /= 10;
    }
}

int main(){
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        answer.resize(0);
        answer.resize(100,0);
        answer[0] = 1;
        cnt = 1;
        mul(i);
        if(answer.size() > result.size()) result.resize(answer.size(),0);
        add();
    }
    for(int i = result.size() - 1 ; i >= 0 ; i--) printf("%d",result[i]);
    printf("\n");
}
*/
/* P1591
#include <iostream>
#include <vector>

using namespace std;

vector<int> answer(3000,0);
int t;
int cnt = 1;
int n;
int a;
int sum = 0;

void mul(){
    for(int i = 2 ; i <= n ; i++){
        for(int j = 0 ; j < answer.size() && j < cnt; j++) answer[j] *= i;
        for(int k = 0 ; k < answer.size() && k < cnt ; k++){
            if(answer[k] > 9){
                int t = answer[k];
                answer[k] = t % 10;
                answer[k + 1] += t / 10;
                if(k == cnt - 1) cnt += 1;
            }
        }
    }
    while(answer.size() > 1 && answer.back() == 0) answer.pop_back();
}

int main(){
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++){
        sum = 0;
        scanf("%d %d",&n,&a);
        answer.resize(0);
        answer.resize(3000,0);
        answer[0] = 1;
        cnt = 1;
        mul();
        for(int i = answer.size() - 1 ; i >= 0 ; i--) {
            if (answer[i] == a) sum += 1;
        }
        printf("%d\n",sum);
    }
}
*/
/*B2005
#include <iostream>

using namespace std;

int main(){
    char str[1];
    scanf("%c",str);
    printf("  %c\n",str[0]);
    printf(" %c%c%c\n",str[0],str[0],str[0]);
    printf("%c%c%c%c%c\n",str[0],str[0],str[0],str[0],str[0]);
}
*/
/*P5703
#include <iostream>

using namespace std;

int main(){
    int num;
    int person;
    scanf("%d %d",&num,&person);
    printf("%d\n",num * person);
}
 */
/*P8218
#include <iostream>
#include <vector>

using namespace std;

const int N = 1e+5 + 10;
vector<int> arr(N);
vector<int> prefix_sum(N,0);
int n;
int m;
int l;
int r;

int main(){
    scanf("%d",&n);
    for(int i = 1 ; i <=n ; i++) scanf("%d",&arr[i]);
    for(int i = 1 ; i <=n ; i++) prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    scanf("%d",&m);
    while(m--){
        scanf("%d %d",&l,&r);
        printf("%d\n",prefix_sum[r] - prefix_sum[l - 1]);
    }
}
*/
/*P2004
#include <iostream>
#include <vector>

using namespace std;

const int N = 1010;
vector<vector<int>> arr(N,vector<int> (N));
vector<vector<long long>> prefix_sum(N,vector<long long> (N,0));
int n;
int m;
int c;
int x;
int y;
long long Max = -10000;
int max_x;
int max_y;

int main(){
    scanf("%d %d %d",&n,&m,&c);
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            prefix_sum[i][j] = prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1] + arr[i][j];
        }
    }
    for(int i = 1 ; i <= n - c + 1 ; i ++){
        for(int j = 1 ; j <= m - c + 1 ; j ++){
            x = i + c - 1;
            y = j + c - 1;
            if((prefix_sum[x][y] - prefix_sum[i - 1][y] - prefix_sum[x][j - 1] + prefix_sum[i - 1][j - 1]) > Max){
                Max = prefix_sum[x][y] - prefix_sum[i - 1][y] - prefix_sum[x][j - 1] + prefix_sum[i - 1][j - 1];
                max_x = i;
                max_y = j;
            }
        }
    }
    printf("%d %d\n",max_x,max_y);
}
*/
/*P1314
#include <iostream>

using namespace std;

typedef struct item{
    long long weight;
    long long value;
}item;

const int N = 2000010;
item arr[N];
long long prefix_cnt[N];
long long prefix_value[N];
long long n;
long long m;
long long s;
long long min_sum = 999999999999;
long long l[N];
long long r[N];

int main(){
    scanf("%lld %lld %lld",&n,&m,&s);
    for(int i = 1 ; i <= n ; i ++) scanf("%lld %lld",&arr[i].weight,&arr[i].value);
    for(int i = 0 ; i < m ; i ++) scanf("%lld %lld",&l[i],&r[i]);
    long long ll = 0;
    long long rr = 1e+6;
    while(ll <= rr){
        long long y = 0;
        long long w = (ll + rr) / 2;
        prefix_value[0] = 0;
        prefix_cnt[0] = 0;
        for(int i = 1 ; i <= n ; i ++){
            if(arr[i].weight >= w){
                prefix_cnt[i] = prefix_cnt[i - 1] + 1;
                prefix_value[i] = prefix_value[i - 1] + arr[i].value;
            }
            else{
                prefix_cnt[i] = prefix_cnt[i  - 1];
                prefix_value[i] = prefix_value[i - 1];
            }
        }
        for(int i = 0 ; i < m ; i++){
            y += (prefix_cnt[r[i]] - prefix_cnt[l[i] - 1]) * (prefix_value[r[i]] - prefix_value[l[i] - 1]);
        }
        if(abs(s - y) <= min_sum){
            min_sum = abs(s - y);
        }
        if(y > s) ll = w + 1;
        else rr = w -1;
    }
    printf("%lld\n", min_sum);
}
*/
/*P2367
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 5000010;
vector<int> arr(N,0);
vector<int> diff(N,0);
int n;
int p;

bool cmp(int a , int b){
    if(a < b) return true;
    else return false;
}

void insert(int x , int y , int z){
    diff[x] += z;
    diff[y + 1] -= z;
}

int main(){
    scanf("%d %d",&n,&p);
    for(int i = 1 ; i <= n ; i ++) scanf("%d",&arr[i]);
    for(int i = 1 ; i <= n ; i ++) insert(i , i , arr[i]);
    while(p --){
        int x;
        int y;
        int z;
        scanf("%d %d %d",&x,&y,&z);
        insert(x,y,z);
    }
    for(int i = 1 ; i <= n ; i ++) arr[i] = arr[i - 1] + diff[i];
    sort(arr.begin() + 1,arr.begin() + 1 + n,cmp);
    printf("%d\n",arr[1]);
}
*/
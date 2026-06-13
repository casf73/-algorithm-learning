#include <iostream>
#include <vector>

using namespace std;

const int N = 1e+5 + 10;
vector<int> arr(N,0);
vector<int> diff(N,0);
int n;
int m;

void insert(int l , int r , int c){
    diff[l] += c;
    diff[r + 1] -= c;
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1 ; i <= n ; i ++) scanf("%d",&arr[i]);
    for(int i = 1 ; i <= n ; i ++) insert(i , i , arr[i]);
    while(m --){
        int l;
        int r;
        int c;
        scanf("%d %d %d",&l,&r,&c);
        insert(l , r , c);
    }
    for(int i = 1 ; i <= n ; i ++) arr[i] = arr[i - 1] + diff[i];
    for(int i = 1 ; i <= n ; i ++) printf("%d ",arr[i]);
}
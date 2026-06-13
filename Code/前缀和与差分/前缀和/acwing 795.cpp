#include <iostream>
#include <vector>

using namespace std;

const int N = 100010;
vector<int> arr(N);
vector<int> prefix_sum(N,0);
int n;
int m;
int l;
int r;

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1 ; i <= n ; i++) scanf("%d",&arr[i]);
    for(int i = 1 ; i <= n ; i++) prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    while(m--){
        scanf("%d %d",&l,&r);
        printf("%d\n",prefix_sum[r] - prefix_sum[l - 1]);
    }
}
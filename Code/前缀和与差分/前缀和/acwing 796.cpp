#include <iostream>
#include <vector>

using namespace std;

const int N = 1010;
vector<vector<int>> arr(N,vector<int> (N));
vector<vector<int>> prefix_sum(N,vector<int> (N,0));
int n;
int m;
int q;
int x1;
int x2;
int y1;
int y2;

int main(){
    scanf("%d %d %d",&n,&m,&q);
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
    while(q --){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        printf("%d\n",prefix_sum[x2][y2] - prefix_sum[x1 -1][y2] - prefix_sum[x2][y1 - 1] + prefix_sum[x1 - 1][y1 - 1]);
    }
}
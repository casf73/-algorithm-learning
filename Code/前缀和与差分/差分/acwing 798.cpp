#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int N = 1010;
vector<vector<int>> arr(N,vector<int> (N,0));
vector<vector<int>> diff(N,vector<int> (N,0));
int n;
int m;
int p;

void insert(int x1 , int y1 , int x2,  int y2 , int c){
    diff[x1][y1] += c;
    diff[x2 + 1][y1] -= c;
    diff[x1][y2 + 1] -= c;
    diff[x2 + 1][y2 + 1] +=c;
}

int main(){
    scanf("%d %d %d",&n,&m,&p);
    for(int i = 1 ; i <= n ; i ++)
        for(int j = 1 ; j <= m ;j ++)
            scanf("%d",&arr[i][j]);
    for(int i = 1 ; i <= n ; i ++)
        for(int j = 1 ; j <= m ;j ++)
            insert(i,j,i,j,arr[i][j]);
    while(p --){
        int x1;
        int x2;
        int y1;
        int y2;
        int c;
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&c);
        insert(x1,y1,x2,y2,c);
    }
    for(int i = 1 ; i <= n ; i ++)
        for(int j = 1 ; j <= m ;j ++)
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + diff[i][j];
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ;j ++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

}
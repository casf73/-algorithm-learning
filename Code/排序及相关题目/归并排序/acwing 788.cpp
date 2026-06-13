#include <bits/stdc++.h>

using namespace std;

int n;
long cnt = 0;
const int sum = 100000;
vector<int> result(sum,0);
vector<int> arr(sum,0);

void merge_sortAndCount(int l , int r){
    if(l >= r) return;
    int mid = (l+r)/2;
    merge_sortAndCount(l,mid);
    merge_sortAndCount(mid+1,r);
    int i =l;
    int j = mid+1;
    int k = 0;
    while(i <= mid && j <= r){
        if(result[i] <= result[j]) arr[k++] = result[i++];
        else{
            arr[k++] = result[j++];
            cnt += (mid - i + 1);
        }
    }
    while(i <= mid) arr[k++] = result[i++];
    while(j <= r) arr[k++] = result[j++];
    for(i = l,j = 0;i <= r; i++, j++) result[i] = arr[j];
}

int main(){
    scanf("%d",&n);
    for(int i = 0;i < n; i++){
        scanf("%d",&result[i]);
    }
    merge_sortAndCount(0,n-1);
    printf("%ld",cnt);
}
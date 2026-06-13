#include <bits/stdc++.h>

using namespace std;

int n;
const int sum = 100000;
vector<int> result(sum,0);
vector<int> arr(sum,0);

void merge_sort(int l , int r) {
    if (l >= r) return;
    int mid = (l + r) / 2;
    merge_sort(l, mid);
    merge_sort(mid+1,r);
    int k = 0;
    int i = l;
    int j = mid+1;
    while(i <= mid && j <= r){
        if(result[i] <= result[j]) arr[k++] = result[i++];
        else arr[k++] = result[j++];
    }
    while(i <= mid) arr[k++] = result[i++];
    while(j <= r) arr[k++] = result[j++];
    for(i = l,j = 0;i <= r;i++, j++) result[i] = arr[j];
}

int main(){
    scanf("%d",&n);
    for(int i = 0;i < n; i++){
        scanf("%d",&result[i]);
    }
    merge_sort(0,n-1);
    for(int i = 0;i < n; i++){
        printf("%d",result[i]);
        if(i != n-1){
            printf(" ");
        }
    }
}
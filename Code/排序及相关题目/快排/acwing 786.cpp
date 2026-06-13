#include <bits/stdc++.h>

using namespace std;

int sum = 100000;
vector<int> arr(sum,0);

void quick_sort(int l, int r){
    if(l >= r) return;
    int mid = arr[(l+r)/2];
    int i = l-1;
    int j = r+1;
    while(i < j){
        i++;
        j--;
        while(arr[i] < mid) i++;
        while(arr[j] > mid) j--;
        if(i < j) swap(arr[i],arr[j]);
    }
    quick_sort(l,j);
    quick_sort(j+1,r);
}

int main(){
    int n;
    int k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    quick_sort(0,n-1);
    printf("%d",arr[k-1]);
}
//
// Created by HY on 2025/9/26.
//快速排序

/*
 *先确定分界点x，取中点数据的值或者取随机位置或者取端点值
 *让小于等于x的在x的左边，大于等于x的在x的右边
 *递归操作以上操作，使得左右两边都有序
*/

/*
 *第二步中可以采用开两个额外数组a和b，然后比x小的放在a，比x大的放在b
 *
*/

 //以下为AcWing第785题答案
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int sum = 100000;
vector<int> arr(sum,0);

void quick_sort(int l, int r){
    if(l >= r){
        return;
    }
    int mid = arr[(l+r)/2];
    int i = l-1;
    int j = r+1;
    while(i<j){
        i++;
        j--;
        while(arr[i] < mid){
            i++;
        }
        while(arr[j] > mid){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    quick_sort(l,j);
    quick_sort(j+1,r);
}


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n;
     cin>>n;
     for(int i = 0; i < n; i++){
         cin>>arr[i];
     }
     quick_sort(0,n-1);
    for(int i = 0; i < n; i++){
        cout<<arr[i];
        if(i != n-1){
            cout<<" ";
        }
    }
}


/*以下为AcWing第786题答案
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
*/

//
// Created by HY on 2025/9/28.
//归并排序

/*
 *确定分界点为中间位置的指针
 *递归排序
 * 归并
 */
/*AcWing 787题
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
*/

/* AcWing  788题
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
*/
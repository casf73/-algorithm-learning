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
//
// Created by HY on 2025/9/29.
//
/*AcWing 789
#include <bits/stdc++.h>

using namespace std;

const int sum = 100000;
int n;
int q;
int k;
vector<int> arr(sum,0);

bool check1(int element, int target){
    if(element >= target) return true;
    else return false;
}

bool check2(int element, int target){
    if(element > target) return true;
    else return false;
}

int bsearch1(int target){
    int l = -1;
    int r = n;
    while(l + 1 != r){
        int mid = (l+r)/2;
        if(check1(arr[mid],target)) r = mid;
        else l = mid;
    }
    if(arr[r] != target) return -1;
    else return r;
}

int bsearch2(int target){
    int l = -1;
    int r = n;
    while(l + 1 != r){
        int mid = (l+r)/2;
        if(check2(arr[mid],target)) r = mid;
        else l = mid;
    }
    if(arr[l] != target) return -1;
    else return l;
}

int main(void){
    scanf("%d %d",&n,&q);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < q; i++){
        scanf("%d",&k);
        int ledge = bsearch1(k);
        int redge = bsearch2(k);
        printf("%d %d\n",ledge,redge);
    }
}
*/
/* Acwing 790
#include <bits/stdc++.h>

using namespace std;

double n;

bool check(double element){
    if(element * element * element > n) return true;
    else return false;
}

double bsearch(void){
    double l = -10000;
    double r = 10000;
    double mid = (l+r)/2;
    while(abs(mid * mid * mid - n) >= 1e-10){
        mid = (l+r)/2;
        if(check(mid)) r = mid;
        else l = mid;
    }
    return mid;
}

int main(void){
    scanf("%lf",&n);
    double result = bsearch();
    printf("%.6lf\n",result);
}
*/
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
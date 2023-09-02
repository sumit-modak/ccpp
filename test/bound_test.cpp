#include<bits/stdc++.h>
using namespace std;

int main(){
    //         0  1  2  3  4  5  6  7  8  9  10 11 12 13
    int a[] = {1, 2, 3, 4, 4, 4, 4, 6, 6, 6, 7};
    int n = sizeof(a)/4, find = 5;
    int *pt1 = lower_bound(a, a+n, find);
    int *pt2 = upper_bound(a, a+n, find);
    //cout << sizeof(a[0]) << " " << n << endl;
    //cout << (pt1) << " " << (pt2) << endl;
    cout << (pt1 - a) << " " << (pt2 - a) << endl;
    cout << (*pt1) << " " << (*pt2) << endl;
    return 0;
}

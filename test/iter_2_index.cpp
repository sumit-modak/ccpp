#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; ++i) 
        cin >> nums[i];
    
    for(auto it=nums.begin(); it!=nums.end(); ++it) {
        int s = (it - nums.begin());
        cout << s  << endl;
    }
    // << " " << it
    return 0;
}
/*8
5
3
9
2
1
4
8
0*/
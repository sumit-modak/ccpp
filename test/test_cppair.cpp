#include<bits/stdc++.h>
using namespace std;

typedef struct xyz{
    int stne;
} xyz;

int main(){
    xyz qwc;
    pair<int, string> p;
    p = {5, "arstneio"};
    pair<int, string> &p1 = p;
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << &p1 << " " << &p << endl;
    p1 = {2, "yu;lbp"};
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << &p1 << " " << &p << " " << &qwc << endl;
    return 0;
}

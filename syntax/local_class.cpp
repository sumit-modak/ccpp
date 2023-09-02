#include<iostream>
using namespace std;

int main() {
    class student {
        string name;
        int age;
    public:
        void setname(string name_) {
            name = name_;
        }
        void setage(int age) {
            this->age = age;
        }
    };

    student x;
    int a1;
    string n1;
    cin >> n1 >> a1;
    x.getname(n1);
    x.getage(a1);

    return 0;
}

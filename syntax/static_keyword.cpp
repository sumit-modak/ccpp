#include<iostream>
using namespace std;

class Employee {
    int id;
public:
    static int count; // static data member of class employee
    void setdata(int _id) {
        id = _id;
        count++;
    }
    void print_data(void) {
        cout << id << " ";
    }
    static void getcount(void) {
        cout << count << endl;
    }
};

int Employee::count; // no reason found for doing this

int main() {
    Employee a, b, c;

    a.setdata(23);
    b.setdata(34);
    c.setdata(12);

    a.print_data();
    b.print_data();
    c.print_data();

    Employee::getcount();
    //cout << Employee::count << endl;

    return 0;
}
#include<iostream>
using namespace std;

struct emp{
    char name[30];
    int age;
    float sal;
};
emp e1 = {"amol", 21, 2345.00};
emp e2 = {"ajay", 19, 2300.00};
//emp &fun();
emp &fun(){
    emp e3 = {"aditya", 21, 3305.75};
    return e3;
}
int main(){
    fun() = e2;
    cout << e2.name << endl << e2.age << endl << e2.sal << endl;
    cout << e1.name << endl << e1.age << endl << e1.sal << endl;
    return 0;
}

#include<iostream>

class Student{
    public:
        string name;
        int dob;
        float marks;

    public:
        float total(float m[]){
            float tot = 0.0;
            int n = sizeof(m)/sizeof(m[0]);
            for(int i=0; i<n; ++i)
                tot += m[i];

            return tot;
        }
        float average(float m[]){
            float tot = total(m);
            int n = sizeof(m)/sizeof(m[0]);
            return tot/n;
        }
        void display(){
            cout << this.name << this.dob << this.marks << endl;
        }
}
int main(){
    Student s1;
    // ebar ja korar kor
    return 0;
}

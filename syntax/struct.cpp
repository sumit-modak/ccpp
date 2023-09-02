#include<stdio.h>
#include<string.h>

struct Student{
  char name[50];
  int age;
  double gpa;
  char major[20];
};

int main(){

  struct Student student1;
  student1.age = 20;
  student1.gpa = 3.2;
  strcpy(student1.name, "Sumit");
  strcpy(student1.major, "CSE");

  return 0;
}

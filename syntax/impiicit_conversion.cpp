#include<string>
#include<iostream>

class Entity {
    int age;
    std::string name;
public:
    Entity(int x_age) : age(x_age), name("Unknown") {}
    Entity(std::string x_name) : age(-1), name(x_name) {}
};
int main() {
    Entity a = std::string("Entity");
    Entity b = 22;
    return 0;
}
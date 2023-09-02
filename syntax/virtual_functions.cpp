#include<iostream>
#include<string>

class Entity {
public:
    virtual std::string getname() {
        return "Entity";
    }
};

class player : public Entity {
    std::string m_name;
public:
    player(const std::string& name) : m_name(name) {}
    std::string getname() override {
        return m_name;
    }
};

int main() {
    Entity *e = new Entity();
    std::cout << e->getname() << std::endl;

    player *p = new player("cherno");
    std::cout << p->getname() << std::endl;

    Entity *e1 = p;
    std::cout << e1->getname() << std::endl;

    return 0;
}

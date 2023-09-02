#include<iostream>
#include<string>

class Printable {
public:
    virtual std::string getClassName() = 0;
};

class Entity : public Printable {
public:
    virtual std::string getname() {
        return "Entity";
    }

    std::string getClassName() override {
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

    std::string getClassName() override {
        return "player";
    }
};

void print(Printable *ob){
    std::cout << ob->getClassName() << std::endl;
}

int main() {
    Entity *e = new Entity();
    // std::cout << e->getname() << std::endl;

    player *p = new player("cherno");
    // std::cout << p->getname() << std::endl;

    print(e);
    print(p);

    return 0;
}

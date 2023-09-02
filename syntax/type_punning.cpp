#include<iostream>

struct Entity {
    int x, y;

    int* getpositions() {
        return &x;
    }
};

int main() {
    int a = 50;
    double value = *(double *)&a;
    std::cout << value << std::endl;

    Entity e = {5, 8};
    int *pos = (int *)&e;
    std::cout << pos[0] << " " << pos[1] << std::endl;

    int y = *(int*)((char*)&e + 4);
    std::cout << y << std::endl;

    int* position = e.getpositions();
    position[0] = 2;
    
    return 0;
}
#include<iostream>

class snake {
public:
    int x, y;
    char direction;
    // r right  l left  u up    d down

    snake(int a, int b, char c) {
        x = a;
        y = b;
        direction = c;
    }
    void return_location(){
        std::cout << this->x << " " << this->y ;
    }
    void moveup() { y++; }
    void movedown() { y--; }
    void moveleft() { x--; }
    void moveright() { x++; }
private:
    snake() {}
};
int main() {
    // snake s;
    snake s1 = snake(1, 2, 'u');
    return 0;
}

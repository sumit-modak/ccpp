#include<iostream>
using namespace std;

struct player {
    int x, y, z;

    player() {
        x = 0;
        y = 0;
        z = 0;
    }

    void moveup() {
        z += 1;
    }
    void movedown() {
        z -= 1;
    }
};

int main() {
    player p1;
    p1.movedown();
    cout << p1.x << " " << p1.y << " " << p1.z << " " << endl;
    return 0;
}

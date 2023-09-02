#include<iostream>

namespace test {
    int x, y;

    test(int a, int b){
        x = a;
        y = b;
    }
    int add() {
        return x + y;
    }

    int multiply() {
        return x * y;
    }
}

int main() {
    std::cout << test::x << std::endl;
    std::cout << test::y << std::endl;
    return 0;
}

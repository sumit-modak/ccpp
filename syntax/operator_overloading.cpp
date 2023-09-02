#include<iostream>

class Complex {
public:
    float re;
    float im;
    Complex(float a, float b){
        re = a;
        im = b;
    }
    Complex(){
        re = 0;
        im = 0;
    }
    Complex operator +(Complex c){
        Complex temp;
        temp.re = re + c.re;
        temp.im = im + c.im;
        return temp;
    }
};

int main(void){
    Complex c1(3, 4), c2(6, 8), c3;
    c3 = c1 + c2;
    std::cout << c3.re << " + " << c3.im << "i" << std::endl;
    return 0;
}

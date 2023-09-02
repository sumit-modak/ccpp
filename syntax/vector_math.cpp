#include<iostream>
#include<string>

class vector2 {
public:
    float x, y;
    vector2(float x, float y) : x(x), y(y) {}

    vector2 add(const vector2& other) const {
        return vector2(x + other.x, y + other.y);
        // return *this + other; or operator+(other);
    }

    vector2 operator+(const vector2& other) const {
        return add(other);
        // return vector2(x + other.x, y + other.y);
    }

    vector2 multiply(const vector2& other) const {
        return vector2(x * other.x, y * other.y);
    }

    vector2 operator*(const vector2& other) const {
        return vector2(x * other.x, y * other.y);
    }

    bool operator==(const vector2& other) const {
        return (x == other.x && y == other.y);
    }

    bool operator!=(const vector2& other) const {
        return (x != other.x && y != other.y);
        // return !operator==(other);
        // return !(*this == other);
    }
};

std::ostream& operator<<(std::ostream& stream, const vector2& other){
    stream << other.x << "i + " << other.y << "j " ;
    return stream;
}

int main(){
    vector2 position(4.0f, 4.0f);
    vector2 speed(0.5f, 1.5f);
    vector2 power(1.1f, 1.1f);

    vector2 result = position + speed * power;
    // position.add(speed.multiply(power))

    std::cout << result << std::endl;

    return 0;
}

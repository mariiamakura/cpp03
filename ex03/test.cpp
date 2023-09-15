#include <iostream>

class CommonBase {
public:
    int health;
    int hit;
};

class Base1 : public CommonBase {
public:
    Base1() {
        health = -1;
        hit = 100;
    }
};

class Base2 : public CommonBase {
public:
    Base2() {
        health = 20;
        hit = 333;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        // Use scope resolution to access health from Base2 and hit from Base1
        int derivedHealth = Base2::health;
        int derivedHit = Base1::hit;

        // You can use derivedHealth and derivedHit here as needed
    }
};

int main() {
    Derived derivedObject;

    // Access the inherited members from Derived
    int derivedHealth = derivedObject.Base2::health;
    int derivedHit = derivedObject.Base1::hit;

    std::cout << "Derived Health: " << derivedHealth << std::endl;
    std::cout << "Derived Hit: " << derivedHit << std::endl;

    return 0;
}

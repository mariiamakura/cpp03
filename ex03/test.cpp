#include <iostream>

class CommonBase {
public:
    int health;
    int hit;

    virtual int foo() {
        return 0;
    }

public:
    CommonBase() {
        health = 0;
        hit = 0;
    }
};

class Base1 : public virtual CommonBase {
public:
    Base1() : CommonBase() {
        health = 1;
        hit = 1;
    }

    virtual int foo() {
        return 1;
    }
};

class Base2 : public virtual CommonBase {
public:
    Base2() : CommonBase() {
        health = 2;
        hit = 2;
    }

    virtual int foo() {
        return 2;
    }
};

class Base3 : public virtual CommonBase {
public:
    Base3() : CommonBase() {
        health = 3;
        hit = 3;
    }

    virtual int foo() {
        return 3;
    }
};

class Derived : public virtual Base1, public virtual Base2, public virtual Base3 {
public:
    Derived() : Base1(), Base2(), Base3() {
        hit = -1;
        health = -1;
    }

    virtual int foo() {
        return -1;
    }
};

int main() {
    Derived *derivedObject = new Derived();
    Base1 *base1 = derivedObject;

    // Access the inherited members from Derived
//    std::cout << "Derived Health: " << derivedObject->health << std::endl;
//    std::cout << "Derived Hit: " << derivedObject->hit << std::endl;
//    std::cout << "Derived Foo: " << derivedObject->foo() << std::endl;
//    std::cout << "Base1 Health: " << derivedObject->Base1::health << std::endl;
//    std::cout << "Base1 Hit: " << derivedObject->Base1::hit << std::endl;
//    std::cout << "Base1 Foo: " << derivedObject->Base1::foo() << std::endl;
//    std::cout << "Base2 Health: " << derivedObject->Base2::health << std::endl;
//    std::cout << "Base2 Hit: " << derivedObject->Base2::hit << std::endl;
//    std::cout << "Base2 Foo: " << derivedObject->Base2::foo() << std::endl;
//    std::cout << "Base3 Health: " << derivedObject->Base3::health << std::endl;
//    std::cout << "Base3 Hit: " << derivedObject->Base3::hit << std::endl;
//    std::cout << "Base3 Foo: " << derivedObject->Base3::foo() << std::endl;

    std::cout << "Base1 Health: " << base1->health << std::endl;
    std::cout << "Base1 Hit: " << base1->hit << std::endl;
    std::cout << "Base1 Foo: " << ((Base1*)base1)->foo() << std::endl;
    std::cout << "Base1 Health: " << base1->Base1::health << std::endl;
    std::cout << "Base1 Hit: " << base1->Base1::hit << std::endl;
    std::cout << "Base1 Foo: " << base1->Base1::foo() << std::endl;
    std::cout << "Common Health: " << base1->CommonBase::health << std::endl;
    std::cout << "Common Hit: " << base1->CommonBase::hit << std::endl;
    std::cout << "Common Foo: " << base1->CommonBase::foo() << std::endl;

    delete derivedObject;

    return 0;
}

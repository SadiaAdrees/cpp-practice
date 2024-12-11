#include <iostream>
#include <string>
using namespace std;

// Base class
class class1 {
public:
    virtual void dosomething() {
        cout << "Doing something in class1" << endl;
    }
    virtual ~class1() {
        cout << "class1 destructor" << endl;
    }
};

// Derived class1 from class1
class class2 : public class1 {
public:
    void dosomething() override {
        cout << "Doing something in class2" << endl;
    }
    ~class2() override {
        cout << "class2 destructor" << endl;
    }
};

// Derived class2 from class2
class class3 : public class2 {
public:
    void dosomething() override {
        cout << "Doing something in class3" << endl;
    }
    ~class3() override {
        cout << "class3 destructor" << endl;
    }
};

// Derived class3 from class3
class class4 : public class3 {
public:
    void dosomething() override {
        cout << "Doing something in class4" << endl;
    }
    ~class4() override {
        cout << "class4 destructor" << endl;
    }
};

int main() {
    cout << "Virtual destructor test:" << endl;
    class1* obj = new class4(); // Create a class4 object via class1 pointer
    obj->dosomething(); // Calls class4's overridden method
    delete obj; // Correctly calls class4's destructor followed by class3's, class2's, and class1's destructors
    return 0;
}


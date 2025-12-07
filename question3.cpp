// Name: Khrisean Stewart
// Date: 2025-12-06
// Id Number: 2401010326
// Question: 3
// Instructor: Doron Williams

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    int size;
    int height;
    string name;
    bool isMammal;
public:
    // default constructor
    Animal() : size(1), height(0), name(""), isMammal(true) { }

    virtual void speak() { cout << "An animal makes a sound.\n"; }
    virtual void move() { cout << "An animal moves.\n"; }

    // setter
    virtual void setAttributes(int s, int h, const string &n, bool mammal) {
        size = s;
        height = h;
        name = n;
        isMammal = mammal;
    }

    void displayInfo() {
        cout << "Name: " << name << "\n";
        cout << "Size: " << size << "\n";
        cout << "Height: " << height << "\n";
        cout << "Type: " << (isMammal ? "Mammal" : "Reptile") << "\n";
    }

    bool getIsMammal() { return isMammal; }
};

class Reptile : public Animal {
public:
    Reptile() : Animal() { 
        setAttributes(1, 0, "", false);
    }

    void speak() override { cout << "A reptile hisses.\n"; }
    void move() override { cout << "A reptile slithers or crawls.\n"; }

    // O.R.. setter to set isMammal = false
    void setAttributes(int s, int h, const string &n, bool mammal) override {
        if (mammal) { 
            cout << "Error: A Reptile cannot be set as a mammal.\n";
            Animal::setAttributes(s, h, n, false);
        } else { 
            Animal::setAttributes(s, h, n, mammal);
        }
    }
};

int main() {
    Animal a;
    a.displayInfo();
    a.speak();
    a.move();
    a.setAttributes(3, 120, "GenericAnimal", true);
    a.displayInfo();

    Reptile r;
    r.displayInfo();
    r.speak();
    r.move();
    r.setAttributes(2, 30, "Iggy", true);
    r.displayInfo();
    r.setAttributes(2, 30, "Iggy", false);
    r.displayInfo();

    return 0;
}

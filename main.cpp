#include <iostream>
#include <string>
#include <vector>

class Animal {
private:
    std::string species;
    int age;
    double weight;

public:
    Animal(std::string s = "Unknown", int a = 0, double w = 0.0) 
        : species(s), age(a), weight(w) {
        std::cout << "[Animal] Created: " << species << std::endl;
    }

    ~Animal() {
        std::cout << "[Animal] Destroyed: " << species << std::endl;
    }

    void displayInfo() const {
        std::cout << "Species: " << species << ", Age: " << age << ", Weight: " << weight << std::endl;
    }
};

class ZooKeeper {
private:
    std::string name;
    std::string shift;
    int experienceYears;

public:
    ZooKeeper(std::string n, std::string s, int exp) 
        : name(n), shift(s), experienceYears(exp) {
        std::cout << "[Keeper] Created: " << name << std::endl;
    }

    ZooKeeper(std::string n) : ZooKeeper(n, "Day", 0) {}

    ~ZooKeeper() {
        std::cout << "[Keeper] Removed: " << name << std::endl;
    }

    void showKeeper() const {
        std::cout << "Keeper: " << name << ", Shift: " << shift << ", Exp: " << experienceYears << std::endl;
    }
};

class Enclosure {
private:
    int enclosureNumber;
    double area;
    bool isClean;

public:
    Enclosure(int num, double a) : enclosureNumber(num), area(a), isClean(true) {
        std::cout << "[Enclosure] Created #" << enclosureNumber << std::endl;
    }

    Enclosure() : Enclosure(0, 50.0) {}

    ~Enclosure() {
        std::cout << "[Enclosure] Closed #" << enclosureNumber << std::endl;
    }

    void status() const {
        std::cout << "Enclosure #" << enclosureNumber << ", Area: " << area << ", Clean: " << (isClean ? "Yes" : "No") << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Ukrainian");

    Animal lion("Lion", 5, 190.5);
    Animal unknown;

    ZooKeeper k1("Alex", "Night", 10);
    ZooKeeper k2("Maria");

    Enclosure enc1(101, 120.0);

    lion.displayInfo();
    k1.showKeeper();
    enc1.status();

    return 0;
}

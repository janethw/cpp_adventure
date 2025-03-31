#include <iostream>
#include <istream>
#include <string>


class Test {
    // name is private
    std::string name;
};


int main() {
    Test t;

    // compiler error because name is private
    t.name = "Entrance";

    std::string choice;

    std::cout << "What direction next? " << std::endl;
    std::cin >> choice;
    std::cout << choice << std::endl;
}